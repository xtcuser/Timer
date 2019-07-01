#ifndef CLOCKWIDGET_H
#define CLOCKWIDGET_H

#include <QTime>
#include <QWidget>

class ClockWidget : public QWidget
{
    Q_OBJECT

public:
    int timeZoneOffset = 0;
    explicit ClockWidget(QWidget *parent = nullptr);

public slots:
    void setTimeZone(int hourOffset);
    void setTimeFR(QTime timeFR);
    void updatetime();
//    void fantasy();

signals:
    void updated(QTime currentTime);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
//    QTime alternativetime = QTime::currentTime();
    QTime time = QTime::currentTime();
};


#endif // CLOCKWIDGET_H
