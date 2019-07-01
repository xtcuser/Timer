#include "clockwidget.h"

#include <QMouseEvent>
#include <QPainter>
#include <QTimer>

ClockWidget::ClockWidget(QWidget *parent)
    : QWidget(parent)
{
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &ClockWidget::updatetime);
    timer->start(1000);
    resize(200, 200);
}

void ClockWidget::paintEvent(QPaintEvent *)
{
    static const QPoint hourHand[3] = {
        QPoint(3, 8),
        QPoint(-3, 8),
        QPoint(0, -40)
    };
    static const QPoint minuteHand[3] = {
        QPoint(3, 8),
        QPoint(-3, 8),
        QPoint(0, -70)
    };

    QColor hourColor(0, 0, 0);
    QColor minuteColor(255, 0, 0);

    int side = qMin(width(), height());
    time = QTime::currentTime().addSecs(timeZoneOffset);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.translate(width() / 2, height() / 2);
    painter.scale(side / 200.0, side / 200.0);

    painter.setPen(Qt::NoPen);
    painter.setBrush(hourColor);

    painter.save();
    painter.rotate(30.0 * ((time.hour() + time.minute() / 60.0)));
    painter.drawConvexPolygon(hourHand, 3);
    painter.restore();

    painter.setPen(hourColor);

    for (int i = 0; i < 12; ++i) {
        painter.drawLine(88, 0, 96, 0);
        painter.rotate(30.0);
    }

    painter.setPen(Qt::NoPen);
    painter.setBrush(minuteColor);

    painter.save();
    painter.rotate(6.0 * (time.minute() + time.second() / 60.0));
    painter.drawConvexPolygon(minuteHand, 3);
    painter.restore();

    painter.setPen(hourColor);

    for (int j = 0; j < 60; ++j) {
        if ((j % 5) != 0)
            painter.drawLine(92, 0, 96, 0);
        painter.rotate(6.0);
    }

    emit updated(time);

//    QTimer *timer = new QTimer(this);
//    connect(timer, SIGNAL(timeout()),
//            this, SLOT(fantasy()));
//    timer->start();
}

void ClockWidget::setTimeZone(int hourOffset)
{
    timeZoneOffset = qMin(qMax(-12, hourOffset), 12) * 3600;
    update();
}

void ClockWidget::setTimeFR(QTime timeFR)
{
    time=timeFR;
    update();
}

void ClockWidget::updatetime()
{
    QWidget::update();
}

//void ClockWidget::fantasy()
//{
//}
