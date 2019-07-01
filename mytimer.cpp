#include "mytimer.h"

#include "clockwidget.h"

#include <QtWidgets>

#include <QtGui>



myTimer::myTimer(QWidget *parent)
    : QWidget(parent)
{

    ClockWidget *istClockW = new ClockWidget;
    istClockW->setTimeZone(0);
    QWidget *clockIstWidget = istClockW;

    ClockWidget *nyClockW = new ClockWidget;
    nyClockW->setTimeZone(-7);
    QWidget *clockNYWidget = nyClockW;

    ClockWidget *londonClockW = new ClockWidget;
    londonClockW->setTimeZone(-2);
    QWidget *clockLondonWidget = londonClockW;

    ClockWidget *tokyoClockW = new ClockWidget;
    tokyoClockW->setTimeZone(6);
    QWidget *clockTokyoWidget = tokyoClockW;

//    ClockWidget *customClockW = new ClockWidget;
//    QWidget *clockCustomWidget = customClockW;

    customClockW->setTimeZone(ourGMT-3);

//    QWidget *clockIstWidget = new ClockWidget;
//    QWidget *clockNYWidget = new ClockWidget;
//    QWidget *clockLondonWidget = new ClockWidget;
//    QWidget *clockTokyoWidget = new ClockWidget;
//    QWidget *clockCustomWidget = new ClockWidget;
    if (this->objectName().isEmpty())
        this->setObjectName(QStringLiteral("this"));
    this->resize(895, 541);
    QFont font;
    font.setPointSize(6);
    this->setFont(font);
    gridLayout_4 = new QGridLayout(this);
    gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
    horizontalLayout_8 = new QHBoxLayout();
    horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
    widget = new QWidget(this);
    widget->setObjectName(QStringLiteral("widget"));
    gridLayout = new QGridLayout(widget);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));
    verticalLayout = new QVBoxLayout();
    verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
//    verticalLayout->addWidget(createIstWidget(parent));
    verticalLayout->addWidget(clockIstWidget);


    label = new QLabel(widget);
    label->setObjectName(QStringLiteral("label"));
    label->setMaximumSize(QSize(16777215, 50));
    QFont font1;
    font1.setFamily(QStringLiteral("Times New Roman"));
    font1.setPointSize(20);
    label->setFont(font1);

    verticalLayout->addWidget(label);

    widget1 = new QWidget(widget);
    widget1->setObjectName(QStringLiteral("widget1"));
    widget1->setMaximumSize(QSize(16777215, 50));
    horizontalLayout = new QHBoxLayout(widget1);
    horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
    istanbulTime = new QLabel(widget1);
    istanbulTime->setObjectName(QStringLiteral("istanbulTime"));
    istanbulTime->setFont(font1);

    horizontalLayout->addWidget(istanbulTime);

    horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout->addItem(horizontalSpacer_3);


    verticalLayout->addWidget(widget1);

    line_3 = new QFrame(widget);
    line_3->setObjectName(QStringLiteral("line_3"));
    line_3->setFrameShape(QFrame::HLine);
    line_3->setFrameShadow(QFrame::Sunken);

    verticalLayout->addWidget(line_3);

//    nyWidget = new QWidget(widget);
//    nyWidget->setObjectName(QStringLiteral("nyWidget"));
//    nyWidget->setMinimumSize(QSize(150, 150));

//    verticalLayout->addWidget(nyWidget);
//    verticalLayout->addWidget(createNYWidget(parent));
    verticalLayout->addWidget(clockNYWidget);

    label_2 = new QLabel(widget);
    label_2->setObjectName(QStringLiteral("label_2"));
    label_2->setMaximumSize(QSize(16777215, 50));
    label_2->setFont(font1);

    verticalLayout->addWidget(label_2);

    widget2 = new QWidget(widget);
    widget2->setObjectName(QStringLiteral("widget2"));
    widget2->setMaximumSize(QSize(16777215, 50));
    horizontalLayout_2 = new QHBoxLayout(widget2);
    horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
    nyTime = new QLabel(widget2);
    nyTime->setObjectName(QStringLiteral("nyTime"));
    nyTime->setFont(font1);

    horizontalLayout_2->addWidget(nyTime);

    horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_2->addItem(horizontalSpacer_4);


    verticalLayout->addWidget(widget2);


    gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


    horizontalLayout_8->addWidget(widget);

    line = new QFrame(this);
    line->setObjectName(QStringLiteral("line"));
    line->setFrameShape(QFrame::VLine);
    line->setFrameShadow(QFrame::Sunken);

    horizontalLayout_8->addWidget(line);

    widget_2 = new QWidget(this);
    widget_2->setObjectName(QStringLiteral("widget_2"));
    gridLayout_2 = new QGridLayout(widget_2);
    gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
    verticalLayout_2 = new QVBoxLayout();
    verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
//    londonWidget = new QWidget(widget_2);
//    londonWidget->setObjectName(QStringLiteral("londonWidget"));
//    londonWidget->setMinimumSize(QSize(150, 150));

//    verticalLayout_2->addWidget(londonWidget);
//    verticalLayout_2->addWidget(createLondonWidget(parent));
    verticalLayout_2->addWidget(clockLondonWidget);

    label_3 = new QLabel(widget_2);
    label_3->setObjectName(QStringLiteral("label_3"));
    label_3->setMaximumSize(QSize(16777215, 50));
    label_3->setFont(font1);

    verticalLayout_2->addWidget(label_3);

    widget3 = new QWidget(widget_2);
    widget3->setObjectName(QStringLiteral("widget3"));
    widget3->setMaximumSize(QSize(16777215, 50));
    horizontalLayout_3 = new QHBoxLayout(widget3);
    horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
    londonTime = new QLabel(widget3);
    londonTime->setObjectName(QStringLiteral("londonTime"));
    londonTime->setFont(font1);

    horizontalLayout_3->addWidget(londonTime);

    horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_3->addItem(horizontalSpacer_5);


    verticalLayout_2->addWidget(widget3);

    line_4 = new QFrame(widget_2);
    line_4->setObjectName(QStringLiteral("line_4"));
    line_4->setFrameShape(QFrame::HLine);
    line_4->setFrameShadow(QFrame::Sunken);

    verticalLayout_2->addWidget(line_4);

//    tokyoWidget = new QWidget(widget_2);
//    tokyoWidget->setObjectName(QStringLiteral("tokyoWidget"));
//    tokyoWidget->setMinimumSize(QSize(247, 150));

//    verticalLayout_2->addWidget(tokyoWidget);
//    verticalLayout_2->addWidget(createTokyoWidget(parent));
    verticalLayout_2->addWidget(clockTokyoWidget);

    label_4 = new QLabel(widget_2);
    label_4->setObjectName(QStringLiteral("label_4"));
    label_4->setMaximumSize(QSize(16777215, 50));
    label_4->setFont(font1);

    verticalLayout_2->addWidget(label_4);

    widget4 = new QWidget(widget_2);
    widget4->setObjectName(QStringLiteral("widget4"));
    widget4->setMaximumSize(QSize(16777215, 50));
    horizontalLayout_4 = new QHBoxLayout(widget4);
    horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
    tokyoTime = new QLabel(widget4);
    tokyoTime->setObjectName(QStringLiteral("tokyoTime"));
    tokyoTime->setMaximumSize(QSize(16777215, 50));
    tokyoTime->setFont(font1);

    horizontalLayout_4->addWidget(tokyoTime);

    horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_4->addItem(horizontalSpacer_6);


    verticalLayout_2->addWidget(widget4);


    gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


    horizontalLayout_8->addWidget(widget_2);

    line_2 = new QFrame(this);
    line_2->setObjectName(QStringLiteral("line_2"));
    line_2->setFrameShape(QFrame::VLine);
    line_2->setFrameShadow(QFrame::Sunken);

    horizontalLayout_8->addWidget(line_2);

    widget_3 = new QWidget(this);
    widget_3->setObjectName(QStringLiteral("widget_3"));
    gridLayout_3 = new QGridLayout(widget_3);
    gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
//    verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

//    gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

    verticalLayout_3 = new QVBoxLayout();
    verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
    widget5 = new QWidget(widget_3);
    widget5->setObjectName(QStringLiteral("widget5"));
    widget5->setMaximumSize(QSize(16777215, 50));
    horizontalLayout_5 = new QHBoxLayout(widget5);
    horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
    label_5 = new QLabel(widget5);
    label_5->setObjectName(QStringLiteral("label_5"));
    label_5->setFont(font1);

    horizontalLayout_5->addWidget(label_5);

    horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_5->addItem(horizontalSpacer_8);


    verticalLayout_3->addWidget(widget5);

    widget6 = new QWidget(widget_3);
    widget6->setObjectName(QStringLiteral("widget6"));
    widget6->setMaximumSize(QSize(16777215, 50));
    horizontalLayout_6 = new QHBoxLayout(widget6);
    horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
    label_6 = new QLabel(widget6);
    label_6->setObjectName(QStringLiteral("label_6"));
    label_6->setMaximumSize(QSize(16777215, 50));
    QFont font2;
    font2.setFamily(QStringLiteral("Times New Roman"));
    font2.setPointSize(13);
    label_6->setFont(font2);

    horizontalLayout_6->addWidget(label_6);

    customGMT = new QSpinBox(widget6);
    customGMT->setObjectName(QStringLiteral("customGMT"));
    customGMT->setMinimum(-11);
    customGMT->setMaximum(12);
    QFont font3;
    font3.setFamily(QStringLiteral("Times New Roman"));
    font3.setPointSize(10);
    customGMT->setFont(font3);

    horizontalLayout_6->addWidget(customGMT);


    verticalLayout_3->addWidget(widget6);

//    customWidget = new QWidget(widget_3);
//    customWidget->setObjectName(QStringLiteral("customWidget"));
//    customWidget->setMinimumSize(QSize(247, 150));

//    verticalLayout_3->addWidget(customWidget);
//    verticalLayout_3->addWidget(createCustomWidget(parent));
    verticalLayout_3->addWidget(clockCustomWidget);

    widget7 = new QWidget(widget_3);
    widget7->setObjectName(QStringLiteral("widget7"));
    widget7->setMaximumSize(QSize(16777215, 50));
    horizontalLayout_7 = new QHBoxLayout(widget7);
    horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
    horizontalLayout_7->setSizeConstraint(QLayout::SetNoConstraint);
    horizontalLayout_7->setContentsMargins(-1, -1, -1, 1);
    customTime = new QLabel(widget7);
    customTime->setObjectName(QStringLiteral("customTime"));
    customTime->setMaximumSize(QSize(16777215, 50));
    customTime->setFont(font1);

    horizontalLayout_7->addWidget(customTime);

    horizontalSpacer_7 = new QSpacerItem(40, 50, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_7->addItem(horizontalSpacer_7);


    verticalLayout_3->addWidget(widget7);


    gridLayout_3->addLayout(verticalLayout_3, 1, 0, 1, 1);

//    verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

//    gridLayout_3->addItem(verticalSpacer_2, 0, 0, 1, 1);


    horizontalLayout_8->addWidget(widget_3);


    gridLayout_4->addLayout(horizontalLayout_8, 0, 0, 1, 1);


    QMetaObject::connectSlotsByName(this);


    label->setText(QApplication::translate("this", "Istanbul (GMT +3)", Q_NULLPTR));



    label_2->setText(QApplication::translate("this", "New York (GMT -4)", Q_NULLPTR));



    label_3->setText(QApplication::translate("this", "London (GMT +1)", Q_NULLPTR));



    label_4->setText(QApplication::translate("this", "Tokyo (GMT +9)", Q_NULLPTR));



    label_5->setText(QApplication::translate("this", "CUSTOM", Q_NULLPTR));
    label_6->setText(QApplication::translate("this", "Select GMT:", Q_NULLPTR));
    customTime->setText(QApplication::translate("this", "00:00:00", Q_NULLPTR));


    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),
            this, SLOT(showerClicked()));
//    connect(customGMT, &QAbstractSpinBox::editingFinished,
//            this, &myTimer::gmtChanged);
    timer->start();



}

void myTimer::showerClicked()
{
   QTime timeist = QTime::currentTime();
   QTime timeGMT = timeist.addSecs(-10800);
   ourGMT = customGMT->value();
   QTime timecustom = timeGMT.addSecs(ourGMT*3600);
   customTime->setText(timecustom.toString());
   customClockW->setTimeZone(ourGMT-3);


   istanbulTime->setText(timeist.toString());
   QTime timeny = timeist.addSecs(-25200);
   nyTime->setText(timeny.toString());
   QTime timelondon = timeist.addSecs(-7200);
   londonTime->setText(timelondon.toString());
   QTime timetokyo = timeist.addSecs(21600);
   tokyoTime->setText(timetokyo.toString());
}




myTimer::~myTimer()
{
}
