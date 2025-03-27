/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <E:\Grid_Monitoring\Monitor_System_UI\MonitorSystem\qcustomplot.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionopen_file;
    QAction *actionsave_file;
    QAction *actionprint;
    QAction *actionundo;
    QAction *actionRedo;
    QAction *actioncopy;
    QAction *actioncut;
    QAction *actionpaste;
    QAction *actionfind;
    QAction *actionReplase;
    QAction *actionContact_Support;
    QAction *actionCheck_to_Updata;
    QAction *actionDeveloper;
    QAction *actionRelease;
    QWidget *centralwidget;
    QWidget *mainWidget;
    QGridLayout *gridLayout;
    QGroupBox *gridGroupBox_3;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *rxdata_window;
    QGroupBox *gridGroupBox_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QLabel *label_15;
    QLineEdit *hum;
    QLabel *label_7;
    QLabel *label_13;
    QLineEdit *tvoc;
    QLineEdit *pitch;
    QLineEdit *yaw;
    QLineEdit *tem;
    QLabel *label_17;
    QLabel *label_14;
    QLabel *label_12;
    QLineEdit *roll;
    QLabel *label_22;
    QLabel *label_16;
    QLabel *label_20;
    QLabel *label_19;
    QLabel *label_8;
    QComboBox *nodes;
    QLabel *label_10;
    QLineEdit *light;
    QLabel *label_9;
    QLabel *label_23;
    QLabel *label_21;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *customplot;
    QGroupBox *gridGroupBox_1;
    QGridLayout *gridLayout_2;
    QFrame *gridFrame;
    QGridLayout *gridLayout_1;
    QLabel *label_2;
    QComboBox *databits;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QComboBox *flowcontrol;
    QComboBox *baudrate;
    QPushButton *close_serialport;
    QComboBox *coms;
    QComboBox *checkbits;
    QPushButton *open_serialport;
    QLabel *label_3;
    QLabel *label_5;
    QComboBox *stopbits;
    QPushButton *find_serialport;
    QGroupBox *gridGroupBox_4;
    QGridLayout *gridLayout_8;
    QWidget *widget1;
    QGridLayout *gridLayout_6;
    QPlainTextEdit *txdata_window;
    QSpacerItem *verticalSpacer;
    QLabel *label_24;
    QPushButton *send_data;
    QPushButton *clear_data;
    QLabel *label_11;
    QLabel *label_18;
    QMenuBar *menubar;
    QMenu *menuopen;
    QMenu *menu_E;
    QMenu *menu_S;
    QMenu *menu_T;
    QMenu *menu_H;
    QMenu *menu_A;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 850);
        MainWindow->setMinimumSize(QSize(1200, 850));
        actionopen_file = new QAction(MainWindow);
        actionopen_file->setObjectName("actionopen_file");
        actionsave_file = new QAction(MainWindow);
        actionsave_file->setObjectName("actionsave_file");
        actionprint = new QAction(MainWindow);
        actionprint->setObjectName("actionprint");
        actionundo = new QAction(MainWindow);
        actionundo->setObjectName("actionundo");
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        actioncopy = new QAction(MainWindow);
        actioncopy->setObjectName("actioncopy");
        actioncut = new QAction(MainWindow);
        actioncut->setObjectName("actioncut");
        actionpaste = new QAction(MainWindow);
        actionpaste->setObjectName("actionpaste");
        actionfind = new QAction(MainWindow);
        actionfind->setObjectName("actionfind");
        actionReplase = new QAction(MainWindow);
        actionReplase->setObjectName("actionReplase");
        actionContact_Support = new QAction(MainWindow);
        actionContact_Support->setObjectName("actionContact_Support");
        actionCheck_to_Updata = new QAction(MainWindow);
        actionCheck_to_Updata->setObjectName("actionCheck_to_Updata");
        actionDeveloper = new QAction(MainWindow);
        actionDeveloper->setObjectName("actionDeveloper");
        actionRelease = new QAction(MainWindow);
        actionRelease->setObjectName("actionRelease");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mainWidget = new QWidget(centralwidget);
        mainWidget->setObjectName("mainWidget");
        mainWidget->setGeometry(QRect(10, 0, 896, 788));
        gridLayout = new QGridLayout(mainWidget);
        gridLayout->setObjectName("gridLayout");
        gridGroupBox_3 = new QGroupBox(mainWidget);
        gridGroupBox_3->setObjectName("gridGroupBox_3");
        gridLayout_3 = new QGridLayout(gridGroupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        rxdata_window = new QPlainTextEdit(gridGroupBox_3);
        rxdata_window->setObjectName("rxdata_window");
        rxdata_window->setContextMenuPolicy(Qt::DefaultContextMenu);
        rxdata_window->setAcceptDrops(true);
        rxdata_window->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        rxdata_window->setLineWidth(1);
        rxdata_window->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        rxdata_window->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        rxdata_window->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        rxdata_window->setReadOnly(false);
        rxdata_window->setOverwriteMode(false);
        rxdata_window->setCenterOnScroll(false);

        gridLayout_3->addWidget(rxdata_window, 0, 0, 1, 1);


        gridLayout->addWidget(gridGroupBox_3, 1, 1, 2, 1);

        gridGroupBox_2 = new QGroupBox(mainWidget);
        gridGroupBox_2->setObjectName("gridGroupBox_2");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gridGroupBox_2->sizePolicy().hasHeightForWidth());
        gridGroupBox_2->setSizePolicy(sizePolicy);
        gridGroupBox_2->setLayoutDirection(Qt::LeftToRight);
        gridLayout_4 = new QGridLayout(gridGroupBox_2);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(gridGroupBox_2);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(500, 300));
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setObjectName("gridLayout_5");
        label_15 = new QLabel(widget);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_15, 0, 0, 1, 1);

        hum = new QLineEdit(widget);
        hum->setObjectName("hum");
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(hum->sizePolicy().hasHeightForWidth());
        hum->setSizePolicy(sizePolicy2);
        hum->setMaximumSize(QSize(65, 16777215));
        hum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(hum, 1, 4, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_7, 1, 3, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_13, 2, 3, 1, 1);

        tvoc = new QLineEdit(widget);
        tvoc->setObjectName("tvoc");
        tvoc->setMaximumSize(QSize(65, 16777215));
        tvoc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(tvoc, 2, 4, 1, 1);

        pitch = new QLineEdit(widget);
        pitch->setObjectName("pitch");
        pitch->setMaximumSize(QSize(65, 16777215));
        pitch->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(pitch, 3, 4, 1, 1);

        yaw = new QLineEdit(widget);
        yaw->setObjectName("yaw");
        yaw->setMaximumSize(QSize(65, 16777215));
        yaw->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(yaw, 4, 1, 1, 1);

        tem = new QLineEdit(widget);
        tem->setObjectName("tem");
        sizePolicy1.setHeightForWidth(tem->sizePolicy().hasHeightForWidth());
        tem->setSizePolicy(sizePolicy1);
        tem->setMaximumSize(QSize(65, 40));
        tem->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(tem, 1, 1, 1, 1);

        label_17 = new QLabel(widget);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_17, 1, 5, 1, 1);

        label_14 = new QLabel(widget);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_14, 4, 0, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_12, 3, 3, 1, 1);

        roll = new QLineEdit(widget);
        roll->setObjectName("roll");
        roll->setMaximumSize(QSize(65, 16777215));
        roll->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(roll, 3, 1, 1, 1);

        label_22 = new QLabel(widget);
        label_22->setObjectName("label_22");
        label_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_22, 3, 5, 1, 1);

        label_16 = new QLabel(widget);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_16, 1, 2, 1, 1);

        label_20 = new QLabel(widget);
        label_20->setObjectName("label_20");
        label_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_20, 2, 5, 1, 1);

        label_19 = new QLabel(widget);
        label_19->setObjectName("label_19");
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_19, 2, 2, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_8, 3, 0, 1, 1);

        nodes = new QComboBox(widget);
        nodes->addItem(QString());
        nodes->addItem(QString());
        nodes->addItem(QString());
        nodes->addItem(QString());
        nodes->addItem(QString());
        nodes->addItem(QString());
        nodes->addItem(QString());
        nodes->addItem(QString());
        nodes->addItem(QString());
        nodes->addItem(QString());
        nodes->setObjectName("nodes");
        nodes->setMaximumSize(QSize(65, 16777215));

        gridLayout_5->addWidget(nodes, 0, 1, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_10, 1, 0, 1, 1);

        light = new QLineEdit(widget);
        light->setObjectName("light");
        light->setMinimumSize(QSize(0, 0));
        light->setMaximumSize(QSize(65, 16777215));
        light->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(light, 2, 1, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_9, 2, 0, 1, 1);

        label_23 = new QLabel(widget);
        label_23->setObjectName("label_23");
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_23, 4, 2, 1, 1);

        label_21 = new QLabel(widget);
        label_21->setObjectName("label_21");
        label_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_21, 3, 2, 1, 1);


        horizontalLayout->addWidget(widget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        customplot = new QCustomPlot(gridGroupBox_2);
        customplot->setObjectName("customplot");
        sizePolicy.setHeightForWidth(customplot->sizePolicy().hasHeightForWidth());
        customplot->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(customplot);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(gridGroupBox_2, 0, 1, 1, 1);

        gridGroupBox_1 = new QGroupBox(mainWidget);
        gridGroupBox_1->setObjectName("gridGroupBox_1");
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(gridGroupBox_1->sizePolicy().hasHeightForWidth());
        gridGroupBox_1->setSizePolicy(sizePolicy3);
        gridGroupBox_1->setMinimumSize(QSize(160, 260));
        gridGroupBox_1->setMaximumSize(QSize(215, 16777215));
        gridLayout_2 = new QGridLayout(gridGroupBox_1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridFrame = new QFrame(gridGroupBox_1);
        gridFrame->setObjectName("gridFrame");
        gridLayout_1 = new QGridLayout(gridFrame);
        gridLayout_1->setObjectName("gridLayout_1");
        gridLayout_1->setContentsMargins(2, 2, 2, 2);
        label_2 = new QLabel(gridFrame);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_1->addWidget(label_2, 6, 0, 1, 1);

        databits = new QComboBox(gridFrame);
        databits->addItem(QString());
        databits->addItem(QString());
        databits->addItem(QString());
        databits->addItem(QString());
        databits->setObjectName("databits");

        gridLayout_1->addWidget(databits, 4, 1, 1, 1);

        label = new QLabel(gridFrame);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout_1->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(gridFrame);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_1->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(gridFrame);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_1->addWidget(label_6, 5, 0, 1, 1);

        flowcontrol = new QComboBox(gridFrame);
        flowcontrol->addItem(QString());
        flowcontrol->setObjectName("flowcontrol");

        gridLayout_1->addWidget(flowcontrol, 6, 1, 1, 1);

        baudrate = new QComboBox(gridFrame);
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->setObjectName("baudrate");
        baudrate->setEditable(false);

        gridLayout_1->addWidget(baudrate, 2, 1, 1, 1);

        close_serialport = new QPushButton(gridFrame);
        close_serialport->setObjectName("close_serialport");
        close_serialport->setMinimumSize(QSize(0, 35));

        gridLayout_1->addWidget(close_serialport, 0, 1, 1, 1);

        coms = new QComboBox(gridFrame);
        coms->setObjectName("coms");

        gridLayout_1->addWidget(coms, 1, 1, 1, 1);

        checkbits = new QComboBox(gridFrame);
        checkbits->addItem(QString());
        checkbits->addItem(QString());
        checkbits->addItem(QString());
        checkbits->addItem(QString());
        checkbits->addItem(QString());
        checkbits->setObjectName("checkbits");

        gridLayout_1->addWidget(checkbits, 3, 1, 1, 1);

        open_serialport = new QPushButton(gridFrame);
        open_serialport->setObjectName("open_serialport");
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(open_serialport->sizePolicy().hasHeightForWidth());
        open_serialport->setSizePolicy(sizePolicy4);
        open_serialport->setMinimumSize(QSize(0, 35));
        open_serialport->setStyleSheet(QString::fromUtf8(""));

        gridLayout_1->addWidget(open_serialport, 0, 0, 1, 1);

        label_3 = new QLabel(gridFrame);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_1->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(gridFrame);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_1->addWidget(label_5, 4, 0, 1, 1);

        stopbits = new QComboBox(gridFrame);
        stopbits->addItem(QString());
        stopbits->addItem(QString());
        stopbits->addItem(QString());
        stopbits->setObjectName("stopbits");

        gridLayout_1->addWidget(stopbits, 5, 1, 1, 1);


        gridLayout_2->addWidget(gridFrame, 1, 0, 1, 1);

        find_serialport = new QPushButton(gridGroupBox_1);
        find_serialport->setObjectName("find_serialport");
        find_serialport->setMinimumSize(QSize(0, 35));
        find_serialport->setStyleSheet(QString::fromUtf8("font: 13pt \"Microsoft YaHei UI\";"));

        gridLayout_2->addWidget(find_serialport, 0, 0, 1, 1);


        gridLayout->addWidget(gridGroupBox_1, 0, 0, 1, 1);

        gridGroupBox_4 = new QGroupBox(mainWidget);
        gridGroupBox_4->setObjectName("gridGroupBox_4");
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(gridGroupBox_4->sizePolicy().hasHeightForWidth());
        gridGroupBox_4->setSizePolicy(sizePolicy5);
        gridGroupBox_4->setMaximumSize(QSize(215, 16777215));
        gridGroupBox_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_8 = new QGridLayout(gridGroupBox_4);
        gridLayout_8->setObjectName("gridLayout_8");
        widget1 = new QWidget(gridGroupBox_4);
        widget1->setObjectName("widget1");
        gridLayout_6 = new QGridLayout(widget1);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setVerticalSpacing(10);
        txdata_window = new QPlainTextEdit(widget1);
        txdata_window->setObjectName("txdata_window");
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(txdata_window->sizePolicy().hasHeightForWidth());
        txdata_window->setSizePolicy(sizePolicy6);
        txdata_window->setMinimumSize(QSize(0, 50));
        txdata_window->setMaximumSize(QSize(16777215, 100));
        txdata_window->setContextMenuPolicy(Qt::DefaultContextMenu);

        gridLayout_6->addWidget(txdata_window, 3, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 110, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_6->addItem(verticalSpacer, 4, 0, 1, 1);

        label_24 = new QLabel(widget1);
        label_24->setObjectName("label_24");
        label_24->setMinimumSize(QSize(0, 30));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_24, 1, 0, 1, 1);

        send_data = new QPushButton(widget1);
        send_data->setObjectName("send_data");
        send_data->setMinimumSize(QSize(0, 30));
        send_data->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"text-decoration: underline;"));

        gridLayout_6->addWidget(send_data, 1, 1, 1, 1);

        clear_data = new QPushButton(widget1);
        clear_data->setObjectName("clear_data");
        clear_data->setMinimumSize(QSize(0, 30));
        clear_data->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"text-decoration: underline;"));

        gridLayout_6->addWidget(clear_data, 0, 1, 1, 1);

        label_11 = new QLabel(widget1);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(0, 30));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_11, 0, 0, 1, 1);

        label_18 = new QLabel(widget1);
        label_18->setObjectName("label_18");
        label_18->setMinimumSize(QSize(0, 15));
        label_18->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_6->addWidget(label_18, 2, 0, 1, 1);


        gridLayout_8->addWidget(widget1, 0, 0, 1, 1);


        gridLayout->addWidget(gridGroupBox_4, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 19));
        menuopen = new QMenu(menubar);
        menuopen->setObjectName("menuopen");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        menu_S = new QMenu(menubar);
        menu_S->setObjectName("menu_S");
        menu_T = new QMenu(menubar);
        menu_T->setObjectName("menu_T");
        menu_H = new QMenu(menubar);
        menu_H->setObjectName("menu_H");
        menu_A = new QMenu(menubar);
        menu_A->setObjectName("menu_A");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuopen->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_S->menuAction());
        menubar->addAction(menu_T->menuAction());
        menubar->addAction(menu_H->menuAction());
        menubar->addAction(menu_A->menuAction());
        menuopen->addAction(actionopen_file);
        menuopen->addAction(actionprint);
        menu_E->addSeparator();
        menu_E->addAction(actionundo);
        menu_E->addAction(actionRedo);
        menu_E->addAction(actioncopy);
        menu_E->addAction(actioncut);
        menu_E->addAction(actionpaste);
        menu_H->addAction(actionContact_Support);
        menu_H->addAction(actionCheck_to_Updata);
        menu_A->addAction(actionDeveloper);
        menu_A->addAction(actionRelease);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "IoTSerialPort", nullptr));
        actionopen_file->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        actionsave_file->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
        actionprint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionundo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionundo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actioncopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actioncopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actioncut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actioncut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionpaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionpaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionfind->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
        actionReplase->setText(QCoreApplication::translate("MainWindow", "Replase", nullptr));
        actionContact_Support->setText(QCoreApplication::translate("MainWindow", "Contact Support", nullptr));
        actionCheck_to_Updata->setText(QCoreApplication::translate("MainWindow", "Check for Updata", nullptr));
        actionDeveloper->setText(QCoreApplication::translate("MainWindow", "Developer", nullptr));
        actionRelease->setText(QCoreApplication::translate("MainWindow", "Release", nullptr));
        gridGroupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\227\245\345\277\227\345\214\272", nullptr));
        gridGroupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\256\236\346\227\266\344\277\241\346\201\257\346\230\276\347\244\272\345\214\272", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:13pt;\">\350\256\276\345\244\207\345\217\267\357\274\232</span></p></body></html>", nullptr));
        hum->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\271\277\345\272\246\357\274\232</p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\260\224\344\275\223\357\274\232</p></body></html>", nullptr));
        tvoc->setText(QString());
        pitch->setText(QString());
        yaw->setText(QString());
        tem->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "%RH", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\201\217\350\210\252\350\247\222\357\274\232</p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\277\257\344\273\260\350\247\222\357\274\232</p></body></html>", nullptr));
        roll->setText(QString());
        label_22->setText(QCoreApplication::translate("MainWindow", "\302\260", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\342\204\203", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "ppb", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "lux", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\250\252\346\273\232\350\247\222\357\274\232</p></body></html>", nullptr));
        nodes->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        nodes->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        nodes->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        nodes->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        nodes->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        nodes->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        nodes->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        nodes->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));
        nodes->setItemText(8, QCoreApplication::translate("MainWindow", "9", nullptr));
        nodes->setItemText(9, QCoreApplication::translate("MainWindow", "10", nullptr));

        label_10->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\270\251\345\272\246\357\274\232</p></body></html>", nullptr));
        light->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\205\211\347\205\247\345\274\272\345\272\246\357\274\232</p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\302\260", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\302\260", nullptr));
        gridGroupBox_1->setTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256\345\214\272", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\265\201\346\216\247\345\210\266", nullptr));
        databits->setItemText(0, QCoreApplication::translate("MainWindow", "8", nullptr));
        databits->setItemText(1, QCoreApplication::translate("MainWindow", "7", nullptr));
        databits->setItemText(2, QCoreApplication::translate("MainWindow", "6", nullptr));
        databits->setItemText(3, QCoreApplication::translate("MainWindow", "5", nullptr));

        databits->setCurrentText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        flowcontrol->setItemText(0, QCoreApplication::translate("MainWindow", "NONE", nullptr));

        baudrate->setItemText(0, QCoreApplication::translate("MainWindow", "115200", nullptr));
        baudrate->setItemText(1, QCoreApplication::translate("MainWindow", "57600", nullptr));
        baudrate->setItemText(2, QCoreApplication::translate("MainWindow", "38400", nullptr));
        baudrate->setItemText(3, QCoreApplication::translate("MainWindow", "19200", nullptr));
        baudrate->setItemText(4, QCoreApplication::translate("MainWindow", "9600", nullptr));
        baudrate->setItemText(5, QCoreApplication::translate("MainWindow", "4800", nullptr));
        baudrate->setItemText(6, QCoreApplication::translate("MainWindow", "2400", nullptr));
        baudrate->setItemText(7, QCoreApplication::translate("MainWindow", "1200", nullptr));

        baudrate->setCurrentText(QCoreApplication::translate("MainWindow", "115200", nullptr));
        close_serialport->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        checkbits->setItemText(0, QCoreApplication::translate("MainWindow", "NONE", nullptr));
        checkbits->setItemText(1, QCoreApplication::translate("MainWindow", "ODD", nullptr));
        checkbits->setItemText(2, QCoreApplication::translate("MainWindow", "EVEN", nullptr));
        checkbits->setItemText(3, QCoreApplication::translate("MainWindow", "MARK", nullptr));
        checkbits->setItemText(4, QCoreApplication::translate("MainWindow", "SPACE", nullptr));

        open_serialport->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        stopbits->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        stopbits->setItemText(1, QCoreApplication::translate("MainWindow", "1.5", nullptr));
        stopbits->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));

        find_serialport->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242\344\270\262\345\217\243", nullptr));
        gridGroupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\345\205\266\344\273\226\350\256\276\347\275\256", nullptr));
        txdata_window->setPlainText(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        send_data->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        clear_data->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256\346\227\245\345\277\227", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\217\221\351\200\201\345\214\272\357\274\232", nullptr));
        menuopen->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266F", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221E", nullptr));
        menu_S->setTitle(QCoreApplication::translate("MainWindow", "\351\200\211\351\241\271S", nullptr));
        menu_T->setTitle(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267T", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251H", nullptr));
        menu_A->setTitle(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
