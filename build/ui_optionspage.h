/********************************************************************************
** Form generated from reading UI file 'optionspage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSPAGE_H
#define UI_OPTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "blazecoinamountfield.h"
#include "qvalidatedlineedit.h"
#include "qvaluecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_OptionsPage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *lineBeforeAddressBook_5;
    QWidget *wServiceMessagesHeader_4;
    QHBoxLayout *horizontalLayout_30;
    QSpacerItem *horizontalSpacer_42;
    QLabel *label_51;
    QLabel *label_52;
    QWidget *wContainer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_36;
    QSpacerItem *horizontalSpacer_49;
    QVBoxLayout *verticalLayout_24;
    QLabel *label_53;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_21;
    QCheckBox *blazecoinAtStartup;
    QCheckBox *autoMining;
    QCheckBox *minimizeToTray;
    QCheckBox *minimizeOnClose;
    QCheckBox *allowSounds;
    QCheckBox *checkUpdatesAtStartup;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_55;
    QWidget *wSettingsInterface;
    QVBoxLayout *verticalLayout_22;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_31;
    QSpacerItem *horizontalSpacer_43;
    QLabel *unitLabel;
    QValueComboBox *unit;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_32;
    QSpacerItem *horizontalSpacer_44;
    QLabel *langLabel;
    QSpacerItem *horizontalSpacer_4;
    QValueComboBox *lang;
    QCheckBox *displayAddresses;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_51;
    QVBoxLayout *verticalLayout_25;
    QLabel *label_54;
    QHBoxLayout *horizontalLayout_33;
    BlazecoinAmountField *transactionFee;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_56;
    QWidget *wSettingsNetwork;
    QVBoxLayout *verticalLayout_23;
    QCheckBox *mapPortUpnp;
    QCheckBox *connectSocks;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_34;
    QSpacerItem *horizontalSpacer_45;
    QLabel *proxyIpLabel;
    QValidatedLineEdit *proxyIp;
    QSpacerItem *horizontalSpacer_46;
    QLabel *proxyPortLabel;
    QLineEdit *proxyPort;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_35;
    QSpacerItem *horizontalSpacer_47;
    QLabel *socksVersionLabel;
    QValueComboBox *socksVersion;
    QSpacerItem *horizontalSpacer_48;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_50;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *applyButton;

    void setupUi(QWidget *OptionsPage)
    {
        if (OptionsPage->objectName().isEmpty())
            OptionsPage->setObjectName(QString::fromUtf8("OptionsPage"));
        OptionsPage->resize(756, 486);
        QPalette palette;
        QBrush brush(QColor(233, 217, 216, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(235, 235, 235, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        QBrush brush2(QColor(171, 127, 130, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush3(QColor(240, 240, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        OptionsPage->setPalette(palette);
        OptionsPage->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(OptionsPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineBeforeAddressBook_5 = new QFrame(OptionsPage);
        lineBeforeAddressBook_5->setObjectName(QString::fromUtf8("lineBeforeAddressBook_5"));
        lineBeforeAddressBook_5->setStyleSheet(QString::fromUtf8("background-color: #0052AE;"));
        lineBeforeAddressBook_5->setFrameShadow(QFrame::Raised);
        lineBeforeAddressBook_5->setLineWidth(0);
        lineBeforeAddressBook_5->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(lineBeforeAddressBook_5);

        wServiceMessagesHeader_4 = new QWidget(OptionsPage);
        wServiceMessagesHeader_4->setObjectName(QString::fromUtf8("wServiceMessagesHeader_4"));
        wServiceMessagesHeader_4->setMinimumSize(QSize(0, 32));
        wServiceMessagesHeader_4->setMaximumSize(QSize(16777215, 32));
        wServiceMessagesHeader_4->setStyleSheet(QString::fromUtf8(""));
        wServiceMessagesHeader_4->setProperty("is_header", QVariant(true));
        horizontalLayout_30 = new QHBoxLayout(wServiceMessagesHeader_4);
        horizontalLayout_30->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalSpacer_42 = new QSpacerItem(7, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_30->addItem(horizontalSpacer_42);

        label_51 = new QLabel(wServiceMessagesHeader_4);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_51->sizePolicy().hasHeightForWidth());
        label_51->setSizePolicy(sizePolicy);
        label_51->setMinimumSize(QSize(30, 30));
        label_51->setMaximumSize(QSize(30, 30));
        label_51->setPixmap(QPixmap(QString::fromUtf8(":/res/settings_icon.png")));

        horizontalLayout_30->addWidget(label_51);

        label_52 = new QLabel(wServiceMessagesHeader_4);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        QFont font;
        font.setPointSize(11);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_52->setFont(font);
        label_52->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #D8DFE9;\n"
"}"));

        horizontalLayout_30->addWidget(label_52);


        verticalLayout->addWidget(wServiceMessagesHeader_4);

        wContainer = new QWidget(OptionsPage);
        wContainer->setObjectName(QString::fromUtf8("wContainer"));
        wContainer->setStyleSheet(QString::fromUtf8("#wContainer {\n"
"	background-color: #D8DFE9;\n"
"}\n"
"\n"
"QLabel {\n"
"	color: #D8DFE9;\n"
"}\n"
"\n"
"/* =========== CheckBox ==============*/\n"
"QCheckBox {\n"
"    spacing: 5px;\n"
"	color: #0052AE;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"	image: url(:/res/check_unchecked.png);\n"
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
        verticalLayout_2 = new QVBoxLayout(wContainer);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        horizontalLayout_36->setContentsMargins(-1, 12, -1, -1);
        horizontalSpacer_49 = new QSpacerItem(30, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_36->addItem(horizontalSpacer_49);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(14);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        label_53 = new QLabel(wContainer);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label_53->setFont(font1);
        label_53->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}"));
        label_53->setAlignment(Qt::AlignCenter);

        verticalLayout_24->addWidget(label_53);

        widget2 = new QWidget(wContainer);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget2->sizePolicy().hasHeightForWidth());
        widget2->setSizePolicy(sizePolicy1);
        verticalLayout_21 = new QVBoxLayout(widget2);
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        blazecoinAtStartup = new QCheckBox(widget2);
        blazecoinAtStartup->setObjectName(QString::fromUtf8("blazecoinAtStartup"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        blazecoinAtStartup->setFont(font2);

        verticalLayout_21->addWidget(blazecoinAtStartup);

        autoMining = new QCheckBox(widget2);
        autoMining->setObjectName(QString::fromUtf8("autoMining"));
        autoMining->setFont(font2);

        verticalLayout_21->addWidget(autoMining);

        minimizeToTray = new QCheckBox(widget2);
        minimizeToTray->setObjectName(QString::fromUtf8("minimizeToTray"));
        minimizeToTray->setFont(font2);

        verticalLayout_21->addWidget(minimizeToTray);

        minimizeOnClose = new QCheckBox(widget2);
        minimizeOnClose->setObjectName(QString::fromUtf8("minimizeOnClose"));
        minimizeOnClose->setFont(font2);

        verticalLayout_21->addWidget(minimizeOnClose);

        allowSounds = new QCheckBox(widget2);
        allowSounds->setObjectName(QString::fromUtf8("allowSounds"));
        allowSounds->setFont(font2);

        verticalLayout_21->addWidget(allowSounds);

        checkUpdatesAtStartup = new QCheckBox(widget2);
        checkUpdatesAtStartup->setObjectName(QString::fromUtf8("checkUpdatesAtStartup"));
        checkUpdatesAtStartup->setEnabled(false);
        checkUpdatesAtStartup->setFont(font2);

        verticalLayout_21->addWidget(checkUpdatesAtStartup);


        verticalLayout_24->addWidget(widget2);

        verticalSpacer_4 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_24->addItem(verticalSpacer_4);

        label_55 = new QLabel(wContainer);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setFont(font1);
        label_55->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}"));
        label_55->setAlignment(Qt::AlignCenter);

        verticalLayout_24->addWidget(label_55);

        wSettingsInterface = new QWidget(wContainer);
        wSettingsInterface->setObjectName(QString::fromUtf8("wSettingsInterface"));
        sizePolicy.setHeightForWidth(wSettingsInterface->sizePolicy().hasHeightForWidth());
        wSettingsInterface->setSizePolicy(sizePolicy);
        verticalLayout_22 = new QVBoxLayout(wSettingsInterface);
#ifndef Q_OS_MAC
        verticalLayout_22->setSpacing(6);
#endif
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        widget3 = new QWidget(wSettingsInterface);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setMinimumSize(QSize(22, 0));
        horizontalLayout_31 = new QHBoxLayout(widget3);
        horizontalLayout_31->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalSpacer_43 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_43);

        unitLabel = new QLabel(widget3);
        unitLabel->setObjectName(QString::fromUtf8("unitLabel"));
        unitLabel->setFont(font2);
        unitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_31->addWidget(unitLabel);

        unit = new QValueComboBox(widget3);
        unit->setObjectName(QString::fromUtf8("unit"));
        QFont font3;
        font3.setPointSize(8);
        unit->setFont(font3);

        horizontalLayout_31->addWidget(unit);

        horizontalLayout_31->setStretch(1, 2);
        horizontalLayout_31->setStretch(2, 1);

        verticalLayout_22->addWidget(widget3);

        widget4 = new QWidget(wSettingsInterface);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setMinimumSize(QSize(22, 0));
        horizontalLayout_32 = new QHBoxLayout(widget4);
        horizontalLayout_32->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalSpacer_44 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_44);

        langLabel = new QLabel(widget4);
        langLabel->setObjectName(QString::fromUtf8("langLabel"));
        langLabel->setFont(font2);
        langLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_32->addWidget(langLabel);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_4);

        lang = new QValueComboBox(widget4);
        lang->setObjectName(QString::fromUtf8("lang"));
        lang->setFont(font3);

        horizontalLayout_32->addWidget(lang);


        verticalLayout_22->addWidget(widget4);

        displayAddresses = new QCheckBox(wSettingsInterface);
        displayAddresses->setObjectName(QString::fromUtf8("displayAddresses"));
        displayAddresses->setFont(font2);

        verticalLayout_22->addWidget(displayAddresses);


        verticalLayout_24->addWidget(wSettingsInterface);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_24->addItem(verticalSpacer_7);

        verticalLayout_24->setStretch(5, 2);

        horizontalLayout_36->addLayout(verticalLayout_24);

        horizontalSpacer_51 = new QSpacerItem(30, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_36->addItem(horizontalSpacer_51);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setSpacing(14);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        label_54 = new QLabel(wContainer);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setFont(font1);
        label_54->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}"));
        label_54->setAlignment(Qt::AlignCenter);

        verticalLayout_25->addWidget(label_54);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        transactionFee = new BlazecoinAmountField(wContainer);
        transactionFee->setObjectName(QString::fromUtf8("transactionFee"));
        sizePolicy1.setHeightForWidth(transactionFee->sizePolicy().hasHeightForWidth());
        transactionFee->setSizePolicy(sizePolicy1);

        horizontalLayout_33->addWidget(transactionFee);


        verticalLayout_25->addLayout(horizontalLayout_33);

        verticalSpacer_5 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_25->addItem(verticalSpacer_5);

        label_56 = new QLabel(wContainer);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setFont(font1);
        label_56->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}"));
        label_56->setAlignment(Qt::AlignCenter);

        verticalLayout_25->addWidget(label_56);

        wSettingsNetwork = new QWidget(wContainer);
        wSettingsNetwork->setObjectName(QString::fromUtf8("wSettingsNetwork"));
        sizePolicy.setHeightForWidth(wSettingsNetwork->sizePolicy().hasHeightForWidth());
        wSettingsNetwork->setSizePolicy(sizePolicy);
        verticalLayout_23 = new QVBoxLayout(wSettingsNetwork);
#ifndef Q_OS_MAC
        verticalLayout_23->setSpacing(6);
#endif
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        mapPortUpnp = new QCheckBox(wSettingsNetwork);
        mapPortUpnp->setObjectName(QString::fromUtf8("mapPortUpnp"));
        mapPortUpnp->setFont(font2);
        mapPortUpnp->setChecked(false);

        verticalLayout_23->addWidget(mapPortUpnp);

        connectSocks = new QCheckBox(wSettingsNetwork);
        connectSocks->setObjectName(QString::fromUtf8("connectSocks"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(connectSocks->sizePolicy().hasHeightForWidth());
        connectSocks->setSizePolicy(sizePolicy2);
        connectSocks->setFont(font2);

        verticalLayout_23->addWidget(connectSocks);

        widget = new QWidget(wSettingsNetwork);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(22, 0));
        horizontalLayout_34 = new QHBoxLayout(widget);
        horizontalLayout_34->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        horizontalSpacer_45 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_45);

        proxyIpLabel = new QLabel(widget);
        proxyIpLabel->setObjectName(QString::fromUtf8("proxyIpLabel"));
        proxyIpLabel->setFont(font2);
        proxyIpLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_34->addWidget(proxyIpLabel);

        proxyIp = new QValidatedLineEdit(widget);
        proxyIp->setObjectName(QString::fromUtf8("proxyIp"));
        proxyIp->setEnabled(true);
        proxyIp->setMinimumSize(QSize(0, 20));
        QFont font4;
        font4.setPointSize(10);
        proxyIp->setFont(font4);

        horizontalLayout_34->addWidget(proxyIp);

        horizontalSpacer_46 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_46);

        proxyPortLabel = new QLabel(widget);
        proxyPortLabel->setObjectName(QString::fromUtf8("proxyPortLabel"));
        proxyPortLabel->setFont(font2);
        proxyPortLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_34->addWidget(proxyPortLabel);

        proxyPort = new QLineEdit(widget);
        proxyPort->setObjectName(QString::fromUtf8("proxyPort"));
        proxyPort->setEnabled(true);
        proxyPort->setMinimumSize(QSize(0, 20));
        proxyPort->setFont(font4);

        horizontalLayout_34->addWidget(proxyPort);

        horizontalLayout_34->setStretch(1, 2);
        horizontalLayout_34->setStretch(5, 1);

        verticalLayout_23->addWidget(widget);

        widget1 = new QWidget(wSettingsNetwork);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMinimumSize(QSize(22, 0));
        horizontalLayout_35 = new QHBoxLayout(widget1);
        horizontalLayout_35->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        horizontalSpacer_47 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_47);

        socksVersionLabel = new QLabel(widget1);
        socksVersionLabel->setObjectName(QString::fromUtf8("socksVersionLabel"));
        socksVersionLabel->setFont(font2);
        socksVersionLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_35->addWidget(socksVersionLabel);

        socksVersion = new QValueComboBox(widget1);
        socksVersion->setObjectName(QString::fromUtf8("socksVersion"));
        socksVersion->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(socksVersion->sizePolicy().hasHeightForWidth());
        socksVersion->setSizePolicy(sizePolicy3);
        socksVersion->setMaximumSize(QSize(70, 16777215));
        socksVersion->setFont(font4);
        socksVersion->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        horizontalLayout_35->addWidget(socksVersion);

        horizontalSpacer_48 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_48);


        verticalLayout_23->addWidget(widget1);


        verticalLayout_25->addWidget(wSettingsNetwork);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_25->addItem(verticalSpacer_6);

        verticalLayout_25->setStretch(5, 2);

        horizontalLayout_36->addLayout(verticalLayout_25);

        horizontalSpacer_50 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_36->addItem(horizontalSpacer_50);


        verticalLayout_2->addLayout(horizontalLayout_36);

        horizontalLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
#endif
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        statusLabel = new QLabel(wContainer);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setMinimumSize(QSize(10, 0));
        statusLabel->setFont(font2);
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(true);

        horizontalLayout->addWidget(statusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        resetButton = new QPushButton(wContainer);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        QFont font5;
        font5.setPointSize(10);
        font5.setStyleStrategy(QFont::PreferAntialias);
        resetButton->setFont(font5);
        resetButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #758EB3;\n"
"	color: #FFFFFF;\n"
"	border: 0px solid gray;\n"
"	max-height: 20px;\n"
"	min-height: 20px;\n"
"	max-width: 160px;\n"
"	min-width: 160px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #0099CC;\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	background-color: #0099CC;\n"
"}"));
        resetButton->setFlat(true);

        horizontalLayout->addWidget(resetButton);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        applyButton = new QPushButton(wContainer);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setFont(font5);
        applyButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #758EB3;\n"
"	color: #FFFFFF;\n"
"	border: 0px solid gray;\n"
"	max-height: 20px;\n"
"	min-height: 20px;\n"
"	max-width: 160px;\n"
"	min-width: 160px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #0099CC;\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	background-color: #0099CC;\n"
"}"));
        applyButton->setFlat(true);

        horizontalLayout->addWidget(applyButton);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(wContainer);

#ifndef QT_NO_SHORTCUT
        unitLabel->setBuddy(unit);
        langLabel->setBuddy(lang);
        proxyIpLabel->setBuddy(proxyIp);
        proxyPortLabel->setBuddy(proxyPort);
        socksVersionLabel->setBuddy(socksVersion);
#endif // QT_NO_SHORTCUT

        retranslateUi(OptionsPage);

        QMetaObject::connectSlotsByName(OptionsPage);
    } // setupUi

    void retranslateUi(QWidget *OptionsPage)
    {
        OptionsPage->setWindowTitle(QApplication::translate("OptionsPage", "Form", 0, QApplication::UnicodeUTF8));
        label_51->setText(QString());
        label_52->setText(QApplication::translate("OptionsPage", "Common settings, Network", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("OptionsPage", "Common", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        blazecoinAtStartup->setToolTip(QApplication::translate("OptionsPage", "Automatically start Blazecoin after logging in to the system.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        blazecoinAtStartup->setText(QApplication::translate("OptionsPage", "&Start Blazecoin on system login", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        autoMining->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        autoMining->setText(QApplication::translate("OptionsPage", "&Start mining blazecoins on start application", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        minimizeToTray->setToolTip(QApplication::translate("OptionsPage", "Show only a tray icon after minimizing the window.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        minimizeToTray->setText(QApplication::translate("OptionsPage", "&Minimize to the tray instead of the taskbar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        minimizeOnClose->setToolTip(QApplication::translate("OptionsPage", "Minimize instead of exit the application when the window is closed. When this option is enabled, the application will be closed only after selecting Quit in the menu.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        minimizeOnClose->setText(QApplication::translate("OptionsPage", "M&inimize on close", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        allowSounds->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        allowSounds->setText(QApplication::translate("OptionsPage", "&Allow sounds", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkUpdatesAtStartup->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        checkUpdatesAtStartup->setText(QApplication::translate("OptionsPage", "&Check updates at startup", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("OptionsPage", "Display", 0, QApplication::UnicodeUTF8));
        unitLabel->setText(QApplication::translate("OptionsPage", "&Unit to show amounts in:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        unit->setToolTip(QApplication::translate("OptionsPage", "Choose the default subdivision unit to show in the interface and when sending coins.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        langLabel->setText(QApplication::translate("OptionsPage", "User Interface &language:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lang->setToolTip(QApplication::translate("OptionsPage", "The user interface language can be set here. This setting will take effect after restarting Blazecoin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        displayAddresses->setToolTip(QApplication::translate("OptionsPage", "Whether to show Blazecoin addresses in the transaction list or not.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        displayAddresses->setText(QApplication::translate("OptionsPage", "&Display addresses in transaction list", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("OptionsPage", "Pay transaction fee", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("OptionsPage", "Network", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mapPortUpnp->setToolTip(QApplication::translate("OptionsPage", "Automatically open the Blazecoin client port on the router. This only works when your router supports UPnP and it is enabled.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mapPortUpnp->setText(QApplication::translate("OptionsPage", "Map port using &UPnP", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        connectSocks->setToolTip(QApplication::translate("OptionsPage", "Connect to the Blazecoin network through a SOCKS proxy (e.g. when connecting through Tor).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        connectSocks->setText(QApplication::translate("OptionsPage", "&Connect through SOCKS proxy:", 0, QApplication::UnicodeUTF8));
        proxyIpLabel->setText(QApplication::translate("OptionsPage", "Proxy &IP:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        proxyIp->setToolTip(QApplication::translate("OptionsPage", "IP address of the proxy (e.g. 127.0.0.1)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        proxyIp->setPlaceholderText(QString());
        proxyPortLabel->setText(QApplication::translate("OptionsPage", "&Port:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        proxyPort->setToolTip(QApplication::translate("OptionsPage", "Port of the proxy (e.g. 9050)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        proxyPort->setPlaceholderText(QString());
        socksVersionLabel->setText(QApplication::translate("OptionsPage", "SOCKS &Version:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        socksVersion->setToolTip(QApplication::translate("OptionsPage", "SOCKS version of the proxy (e.g. 5)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        statusLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("OptionsPage", "Reset all client options to default.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QApplication::translate("OptionsPage", "&Reset Options", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("OptionsPage", "&Apply", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OptionsPage: public Ui_OptionsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSPAGE_H
