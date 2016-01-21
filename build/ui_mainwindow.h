/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_12;
    QPushButton *bHelp;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QWidget *wHeader;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *wCaption;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QWidget *wCaptionButtons;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *wHome;
    QLabel *label_18;
    QLabel *label;
    QWidget *wMining;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_19;
    QStackedWidget *stackedWidget;
    QWidget *wStatusBar;
    QLabel *label_12;
    QProgressBar *progressBar;
    QLabel *label_13;
    QLabel *label_blaze;
    QLabel *label_14;
    QLabel *label_15;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 570);
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow {\n"
"	background-color: rgb(158, 0, 15);\n"
"}\n"
"\n"
"QMenu {\n"
"    background-color: #9e000f;\n"
"    border: 0px solid black;\n"
"}\n"
"\n"
"QMenu::item {\n"
"    background-color: transparent;\n"
"	color: #deeef1;\n"
"    padding: 4px 10px 4px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    background-color: #0099\320\241\320\241;\n"
"	color: #FFFFFF;\n"
"    border: none;\n"
"}\n"
"\n"
"/* ================= combobox */\n"
"QComboBox {\n"
"    border: 1px solid #ededed;\n"
"    padding: 0px 18px 0px 3px;\n"
"    min-width: 20px;\n"
"	min-height: 20px;\n"
" }\n"
"\n"
" QComboBox:editable {\n"
"     background: white;\n"
" }\n"
"\n"
" QComboBox:!editable{\n"
"      background-color: #fafcfc;\n"
" }\n"
"\n"
"QComboBox:disabled {\n"
"	background-color: #e0e0e0;\n"
"}\n"
"\n"
" QComboBox:!editable:on {\n"
"     background-color: #fafcfc;\n"
" }\n"
"\n"
" QComboBox:on {\n"
"     /*padding-top: 3px;\n"
"     padding-left: 4px;*/\n"
" }\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin:"
                        " padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"	background-color: #c02635;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;\n"
"}\n"
"QComboBox::drop-down:hover, QComboBox::drop-down:on {\n"
"	background-color: #c02635;\n"
"}\n"
"\n"
" QComboBox::down-arrow {\n"
"	image: url(:/res/combo_arrow.png);\n"
" }\n"
"\n"
" QComboBox::down-arrow:on {\n"
"/*     top: 1px;\n"
"     left: 1px;*/\n"
" }\n"
"\n"
"/* =========== QLineEdit =============*/\n"
"QLineEdit {\n"
"	border: 0px solid gray;\n"
"}\n"
"QLineEdit:disabled {\n"
"	background-color: #e0e0e0;\n"
"}\n"
"/* =========== header ===============*/\n"
"QWidget[is_header=\"true\"] {\n"
"	background-color: #D8DFE9;\n"
"}\n"
"/* =========== CheckBox ==============*/\n"
"QCheckBox {\n"
"    spacing: 5px;\n"
"	color: #9e000f;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"	image: url(:/res/check_unc"
                        "hecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"    image: url(:/res/check_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"    image: url(:/res/check_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"	image: url(:/res/check_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"    image: url(:/res/check_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"    image: url(:/res/check_checked.png);\n"
"}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(-1, 160, 141, 36));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        font1.setStyleStrategy(QFont::PreferAntialias);
        pushButton_6->setFont(font1);
        pushButton_6->setFocusPolicy(Qt::NoFocus);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	text-align:left;\n"
"	border: 0px solid gray;\n"
"	padding: 3px 5px 3px 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	background-color: #d80317;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #d80317;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon);
        pushButton_6->setIconSize(QSize(36, 36));
        pushButton_6->setFlat(true);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(-1, 210, 141, 36));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	text-align:left;\n"
"	border: 0px solid gray;\n"
"	padding: 3px 5px 3px 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	background-color: #d80317;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #d80317;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/upload.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon1);
        pushButton_7->setIconSize(QSize(36, 36));
        pushButton_7->setFlat(true);
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(-1, 260, 141, 36));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	text-align:left;\n"
"	border: 0px solid gray;\n"
"	padding: 3px 5px 3px 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	background-color: #d80317;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #d80317;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/transactions.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon2);
        pushButton_8->setIconSize(QSize(36, 36));
        pushButton_8->setFlat(true);
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(-1, 310, 141, 36));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setFont(font1);
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	text-align:left;\n"
"	border: 0px solid gray;\n"
"	padding: 3px 5px 3px 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	background-color: #d80317;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #d80317;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/address_book.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon3);
        pushButton_12->setIconSize(QSize(36, 36));
        pushButton_12->setFlat(true);
        bHelp = new QPushButton(centralWidget);
        bHelp->setObjectName(QString::fromUtf8("bHelp"));
        bHelp->setGeometry(QRect(-1, 360, 141, 36));
        sizePolicy.setHeightForWidth(bHelp->sizePolicy().hasHeightForWidth());
        bHelp->setSizePolicy(sizePolicy);
        bHelp->setMinimumSize(QSize(30, 30));
        bHelp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	text-align:left;\n"
"	border: 0px solid gray;\n"
"	padding: 3px 5px 3px 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	background-color: #d80317;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #d80317;\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        bHelp->setIcon(icon4);
        bHelp->setIconSize(QSize(36, 36));
        bHelp->setFlat(true);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        wHeader = new QWidget(centralWidget);
        wHeader->setObjectName(QString::fromUtf8("wHeader"));
        wHeader->setGeometry(QRect(0, 0, 902, 127));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wHeader->sizePolicy().hasHeightForWidth());
        wHeader->setSizePolicy(sizePolicy1);
        wHeader->setMinimumSize(QSize(0, 127));
        wHeader->setMaximumSize(QSize(16777215, 127));
        wHeader->setStyleSheet(QString::fromUtf8("#wHeader {\n"
"	background-color: rgb(158, 0, 15);\n"
"}\n"
"\n"
"QWidget {\n"
"	color: white;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(wHeader);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        wCaption = new QWidget(wHeader);
        wCaption->setObjectName(QString::fromUtf8("wCaption"));
        wCaption->setStyleSheet(QString::fromUtf8("#wCaption {\n"
"\n"
"	background-image: url(:/res/wallet-header.jpg);\n"
"}\n"
"\n"
"QWidget {\n"
"	color: white;\n"
"}"));
        pushButton_9 = new QPushButton(wCaption);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(19, -2, 46, 38));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid #0099CC;\n"
"	margin: 0px;\n"
"	padding: 10px;\n"
"	background-color: transparent;\n"
"	color: #888888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border: 0px solid #0075d1;\n"
"	margin: 0px;\n"
"	background-color: rgb(229, 1, 23);\n"
"}"));
        pushButton_9->setFlat(true);
        pushButton_5 = new QPushButton(wCaption);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(71, -2, 103, 38));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid #0099CC;\n"
"	margin: 0px;\n"
"	padding: 10px;\n"
"	background-color: transparent;\n"
"	color: #888888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border: 0px solid #0075d1;\n"
"	margin: 0px;\n"
"	background-color: rgb(229, 1, 23);\n"
"}"));
        pushButton_5->setFlat(true);
        pushButton_3 = new QPushButton(wCaption);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(182, -2, 82, 38));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid #d5c3b4;\n"
"	margin: 0px;\n"
"	padding: 10px;\n"
"	background-color: transparent;\n"
"	color: #888888;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border: 0px solid #0075d1;\n"
"	margin: 0px;\n"
"	background-color: rgb(229, 1, 23);\n"
"}"));
        pushButton_3->setFlat(true);
        wCaptionButtons = new QWidget(wCaption);
        wCaptionButtons->setObjectName(QString::fromUtf8("wCaptionButtons"));
        wCaptionButtons->setGeometry(QRect(685, 0, 52, 30));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(wCaptionButtons->sizePolicy().hasHeightForWidth());
        wCaptionButtons->setSizePolicy(sizePolicy3);
        horizontalLayout = new QHBoxLayout(wCaptionButtons);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        pushButton = new QPushButton(wCaption);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(864, 3, 30, 30));
        pushButton->setMinimumSize(QSize(30, 30));
        pushButton->setMaximumSize(QSize(30, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	image: url(:/res/close_normal.png);\n"
"	border: 0px solid gray;\n"
"}\n"
"QPushButton:pressed:flat {\n"
"	image: url(:/res/close_normal.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/close_normal.png);\n"
"}"));
        pushButton->setText(QString::fromUtf8(""));
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(wCaption);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(844, 2, 16, 30));
        pushButton_2->setMinimumSize(QSize(16, 30));
        pushButton_2->setMaximumSize(QSize(16, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/minimize_normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/minimize_normal.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/minimize_hover.png);\n"
"}"));
        pushButton_2->setText(QString::fromUtf8(""));
        pushButton_2->setFlat(true);
        wHome = new QWidget(wCaption);
        wHome->setObjectName(QString::fromUtf8("wHome"));
        wHome->setGeometry(QRect(20, 40, 540, 80));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(wHome->sizePolicy().hasHeightForWidth());
        wHome->setSizePolicy(sizePolicy4);
        wHome->setMinimumSize(QSize(540, 76));
        wHome->setMaximumSize(QSize(90, 16777215));
        wHome->setStyleSheet(QString::fromUtf8("#wHome {\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"#wHome:hover {\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"#wHome[is_pressed=\"true\"] {\n"
"	background-color: #9D0B17;\n"
"}\n"
"\n"
"#wHome[is_checked=\"true\"] {\n"
"	background-color: #a8696f;\n"
"}"));
        wHome->setProperty("is_checked", QVariant(false));
        wHome->setProperty("is_pressed", QVariant(false));
        label_18 = new QLabel(wHome);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(400, 12, 135, 51));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/res/overview.png")));
        label = new QLabel(wHome);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, 0, 328, 80));
        label->setStyleSheet(QString::fromUtf8("#label {\n"
"\n"
"	background-image: url(:/res/blazecoin-logo.png);\n"
"}"));
        wMining = new QWidget(wCaption);
        wMining->setObjectName(QString::fromUtf8("wMining"));
        wMining->setGeometry(QRect(574, 40, 90, 76));
        sizePolicy4.setHeightForWidth(wMining->sizePolicy().hasHeightForWidth());
        wMining->setSizePolicy(sizePolicy4);
        wMining->setMinimumSize(QSize(90, 76));
        wMining->setMaximumSize(QSize(90, 16777215));
        wMining->setStyleSheet(QString::fromUtf8("#wMining {\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"#wMining:hover {\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"#wMining[is_pressed=\"true\"] {\n"
"	background-color: #9D0B17;\n"
"}\n"
"\n"
"#wMining[is_checked=\"true\"] {\n"
"	background-color: #a8696f;\n"
"}"));
        wMining->setProperty("is_checked", QVariant(false));
        wMining->setProperty("is_pressed", QVariant(false));
        label_16 = new QLabel(wMining);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(17, 12, 130, 51));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/res/mining.png")));
        label_17 = new QLabel(wCaption);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(644, 64, 70, 20));
        QFont font2;
        font2.setPointSize(11);
        font2.setStyleStrategy(QFont::PreferAntialias);
        label_17->setFont(font2);
        label_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_17->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(wCaption);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(464, 64, 96, 20));
        label_19->setFont(font2);
        label_19->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_19->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(wCaption);


        horizontalLayout_4->addLayout(verticalLayout_2);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(155, 141, 733, 378));
        wStatusBar = new QWidget(centralWidget);
        wStatusBar->setObjectName(QString::fromUtf8("wStatusBar"));
        wStatusBar->setGeometry(QRect(0, 530, 901, 37));
        wStatusBar->setMinimumSize(QSize(0, 37));
        wStatusBar->setMaximumSize(QSize(16777215, 37));
        wStatusBar->setStyleSheet(QString::fromUtf8("#wStatusBar {\n"
"	background-color: #9e000f;\n"
"}\n"
"QLabel {\n"
"	color: #c8e1e1;\n"
"}"));
        label_12 = new QLabel(wStatusBar);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(11, 11, 143, 17));
        QFont font3;
        font3.setPointSize(8);
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        progressBar = new QProgressBar(wStatusBar);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(161, 9, 655, 21));
        progressBar->setMinimumSize(QSize(200, 0));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 0px solid grey;\n"
"	background-color: #68030c;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #fa031a;\n"
"    /*width: 20px;*/\n"
"}"));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        label_13 = new QLabel(wStatusBar);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(429, 11, 112, 17));
        QFont font4;
        font4.setPointSize(10);
        label_13->setFont(font4);
        label_13->setStyleSheet(QString::fromUtf8("#label_13 {\n"
"	color: white;\n"
"}"));
        label_blaze = new QLabel(wStatusBar);
        label_blaze->setObjectName(QString::fromUtf8("label_blaze"));
        label_blaze->setGeometry(QRect(866, 7, 27, 25));
        label_blaze->setText(QString::fromUtf8(""));
        label_blaze->setPixmap(QPixmap(QString::fromUtf8(":/res/blaze_icon_off.png")));
        label_14 = new QLabel(wStatusBar);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(830, 6, 34, 28));
        label_14->setText(QString::fromUtf8(""));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/res/connection_1.png")));
        label_15 = new QLabel(wStatusBar);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(2, 5, 0, 0));
        label_15->setStyleSheet(QString::fromUtf8("#label_15 {\n"
"	display: none;\n"
"}"));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/res/sync_1.png")));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(showMinimized()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MainWindow, SLOT(gotoHistoryPage()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), MainWindow, SLOT(menuFileRequested()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MainWindow, SLOT(menuOperationsRequested()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(menuSettingsRequested()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), MainWindow, SLOT(gotoReceiveCoinsPage()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), MainWindow, SLOT(gotoAddressBookPage()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), MainWindow, SLOT(gotoSendCoinsPage()));

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "Send Coins", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "Receive Coins", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "Transactions", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("MainWindow", "Address Book", 0, QApplication::UnicodeUTF8));
        bHelp->setText(QApplication::translate("MainWindow", "Console", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "Operations", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        wHome->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Welcome to Blazecoin. This is your personal account</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_18->setText(QString());
        label->setText(QString());
        label_16->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "Mining", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Overview", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Synchronizing Network", 0, QApplication::UnicodeUTF8));
        progressBar->setFormat(QString());
        label_13->setText(QApplication::translate("MainWindow", "10549874 blocks", 0, QApplication::UnicodeUTF8));
        label_15->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
