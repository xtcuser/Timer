#ifndef MYTIMER_H
#define MYTIMER_H

#include "clockwidget.h"
#include <QSpinBox>
#include <QPushButton>
#include <QWidget>
#include <QSpacerItem>
#include <QBoxLayout>
#include <QListWidget>
#include <QFrame>

QT_BEGIN_NAMESPACE
class QAbstractButton;
class QLabel;
class QSpinBox;
QT_END_NAMESPACE
class ClockWidget;

class myTimer : public QWidget
{
    Q_OBJECT
public:
    myTimer(QWidget *parent = nullptr);
    ~myTimer();

public slots:

private slots:
    void showerClicked();
private:
    ClockWidget clockWidget;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *istanbulTime;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_3;
    QWidget *nyWidget;
    QLabel *label_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nyTime;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *londonWidget;
    QLabel *label_3;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *londonTime;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line_4;
    QWidget *tokyoWidget;
    QLabel *label_4;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *tokyoTime;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpinBox *customGMT;
    QWidget *customWidget;
    QWidget *widget7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *customTime;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    int ourGMT = 0;
    ClockWidget *customClockW = new ClockWidget;
    QWidget *clockCustomWidget = customClockW;

//    Playlist Components

public:

//    Playlist Components
};
 // MYTIMER_H

#endif
