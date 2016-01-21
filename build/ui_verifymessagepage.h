/********************************************************************************
** Form generated from reading UI file 'verifymessagepage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFYMESSAGEPAGE_H
#define UI_VERIFYMESSAGEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_VerifyMessagePage
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *lineBeforeAddressBook_3;
    QWidget *wHeader;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_28;
    QLabel *label_37;
    QLabel *label_38;
    QWidget *wContainer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_29;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLabel *label_40;
    QValidatedLineEdit *signatureIn_VM;
    QLabel *label_41;
    QPlainTextEdit *messageIn_VM;
    QLabel *label_39;
    QValidatedLineEdit *addressIn_VM;
    QPushButton *addressBookButton_VM;
    QLabel *label_2;
    QLabel *statusLabel_VM;
    QWidget *wAcceptHolder;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_30;
    QPushButton *clearButton_VM;
    QPushButton *verifyMessageButton_VM;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_31;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *VerifyMessagePage)
    {
        if (VerifyMessagePage->objectName().isEmpty())
            VerifyMessagePage->setObjectName(QString::fromUtf8("VerifyMessagePage"));
        VerifyMessagePage->resize(750, 370);
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
        VerifyMessagePage->setPalette(palette);
        VerifyMessagePage->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 1px solid #ededed;\n"
"}\n"
""));
        verticalLayout_3 = new QVBoxLayout(VerifyMessagePage);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lineBeforeAddressBook_3 = new QFrame(VerifyMessagePage);
        lineBeforeAddressBook_3->setObjectName(QString::fromUtf8("lineBeforeAddressBook_3"));
        lineBeforeAddressBook_3->setStyleSheet(QString::fromUtf8("background-color: #0052AE;"));
        lineBeforeAddressBook_3->setFrameShadow(QFrame::Raised);
        lineBeforeAddressBook_3->setLineWidth(0);
        lineBeforeAddressBook_3->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(lineBeforeAddressBook_3);

        wHeader = new QWidget(VerifyMessagePage);
        wHeader->setObjectName(QString::fromUtf8("wHeader"));
        wHeader->setMinimumSize(QSize(0, 32));
        wHeader->setMaximumSize(QSize(16777215, 32));
        wHeader->setProperty("is_header", QVariant(true));
        horizontalLayout_20 = new QHBoxLayout(wHeader);
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalSpacer_28 = new QSpacerItem(7, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_28);

        label_37 = new QLabel(wHeader);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy);
        label_37->setMinimumSize(QSize(30, 30));
        label_37->setMaximumSize(QSize(30, 30));
        label_37->setPixmap(QPixmap(QString::fromUtf8(":/res/verify_sign.png")));

        horizontalLayout_20->addWidget(label_37);

        label_38 = new QLabel(wHeader);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        QFont font;
        font.setPointSize(11);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_38->setFont(font);
        label_38->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #D8DFE9;\n"
"}"));

        horizontalLayout_20->addWidget(label_38);


        verticalLayout_3->addWidget(wHeader);

        wContainer = new QWidget(VerifyMessagePage);
        wContainer->setObjectName(QString::fromUtf8("wContainer"));
        wContainer->setStyleSheet(QString::fromUtf8("#wContainer {\n"
"	background-color: #D8DFE9;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(wContainer);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_29 = new QSpacerItem(136, 216, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_29);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, 6, -1, 3);
        label = new QLabel(wContainer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(28, 0));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        gridLayout_5->addWidget(label, 0, 3, 1, 1);

        label_40 = new QLabel(wContainer);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setFont(font1);
        label_40->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}"));
        label_40->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_40->setMargin(5);

        gridLayout_5->addWidget(label_40, 2, 0, 1, 1);

        signatureIn_VM = new QValidatedLineEdit(wContainer);
        signatureIn_VM->setObjectName(QString::fromUtf8("signatureIn_VM"));
        signatureIn_VM->setMinimumSize(QSize(0, 20));
        QFont font2;
        font2.setPointSize(10);
        signatureIn_VM->setFont(font2);
        signatureIn_VM->setReadOnly(false);

        gridLayout_5->addWidget(signatureIn_VM, 2, 1, 1, 1);

        label_41 = new QLabel(wContainer);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setFont(font1);
        label_41->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}"));
        label_41->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_41->setMargin(5);

        gridLayout_5->addWidget(label_41, 1, 0, 1, 1);

        messageIn_VM = new QPlainTextEdit(wContainer);
        messageIn_VM->setObjectName(QString::fromUtf8("messageIn_VM"));
        messageIn_VM->setFont(font2);
        messageIn_VM->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"	border: 1px solid #ededed;\n"
"}"));
        messageIn_VM->setBackgroundVisible(false);

        gridLayout_5->addWidget(messageIn_VM, 1, 1, 1, 1);

        label_39 = new QLabel(wContainer);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setFont(font1);
        label_39->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}"));
        label_39->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_39->setMargin(5);

        gridLayout_5->addWidget(label_39, 0, 0, 1, 1);

        addressIn_VM = new QValidatedLineEdit(wContainer);
        addressIn_VM->setObjectName(QString::fromUtf8("addressIn_VM"));
        addressIn_VM->setMinimumSize(QSize(0, 20));
        addressIn_VM->setFont(font2);
        addressIn_VM->setMaxLength(34);

        gridLayout_5->addWidget(addressIn_VM, 0, 1, 1, 1);

        addressBookButton_VM = new QPushButton(wContainer);
        addressBookButton_VM->setObjectName(QString::fromUtf8("addressBookButton_VM"));
        addressBookButton_VM->setMinimumSize(QSize(28, 28));
        addressBookButton_VM->setMaximumSize(QSize(28, 28));
        addressBookButton_VM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/addressbook/normal.png);\n"
"}\n"
"\n"
"QPushButton:!enabled {\n"
"	image: url(:/res/addressbook/disabled.png);\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	image: url(:/res/addressbook/pressed.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/addressbook/hover.png);\n"
"}"));
        addressBookButton_VM->setFlat(true);

        gridLayout_5->addWidget(addressBookButton_VM, 0, 2, 1, 1);

        label_2 = new QLabel(wContainer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(28, 28));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);

        gridLayout_5->addWidget(label_2, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        statusLabel_VM = new QLabel(wContainer);
        statusLabel_VM->setObjectName(QString::fromUtf8("statusLabel_VM"));
        statusLabel_VM->setFont(font1);
        statusLabel_VM->setAlignment(Qt::AlignCenter);
        statusLabel_VM->setWordWrap(true);

        verticalLayout->addWidget(statusLabel_VM);

        wAcceptHolder = new QWidget(wContainer);
        wAcceptHolder->setObjectName(QString::fromUtf8("wAcceptHolder"));
        wAcceptHolder->setMinimumSize(QSize(0, 26));
        horizontalLayout_22 = new QHBoxLayout(wAcceptHolder);
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_30);

        clearButton_VM = new QPushButton(wAcceptHolder);
        clearButton_VM->setObjectName(QString::fromUtf8("clearButton_VM"));
        clearButton_VM->setMinimumSize(QSize(160, 20));
        clearButton_VM->setMaximumSize(QSize(160, 20));
        QFont font3;
        font3.setPointSize(10);
        font3.setStyleStrategy(QFont::PreferAntialias);
        clearButton_VM->setFont(font3);
        clearButton_VM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"	background-color: #0052AE;\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	background-color: #0052AE;\n"
"}"));
        clearButton_VM->setFlat(true);

        horizontalLayout_22->addWidget(clearButton_VM);

        verifyMessageButton_VM = new QPushButton(wAcceptHolder);
        verifyMessageButton_VM->setObjectName(QString::fromUtf8("verifyMessageButton_VM"));
        verifyMessageButton_VM->setFont(font3);
        verifyMessageButton_VM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        verifyMessageButton_VM->setFlat(true);

        horizontalLayout_22->addWidget(verifyMessageButton_VM);

        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer);


        verticalLayout->addWidget(wAcceptHolder);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_31 = new QSpacerItem(136, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_31);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 7);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addWidget(wContainer);


        retranslateUi(VerifyMessagePage);

        QMetaObject::connectSlotsByName(VerifyMessagePage);
    } // setupUi

    void retranslateUi(QWidget *VerifyMessagePage)
    {
        VerifyMessagePage->setWindowTitle(QApplication::translate("VerifyMessagePage", "Form", 0, QApplication::UnicodeUTF8));
        label_37->setText(QString());
        label_38->setText(QApplication::translate("VerifyMessagePage", "Verify Message", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_40->setText(QApplication::translate("VerifyMessagePage", "Signature", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("VerifyMessagePage", "Text", 0, QApplication::UnicodeUTF8));
        messageIn_VM->setPlainText(QString());
        label_39->setText(QApplication::translate("VerifyMessagePage", "Address", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addressIn_VM->setToolTip(QApplication::translate("VerifyMessagePage", "The address the message was signed with (e.g. MNS17iag9jJgTHD1VXjvLCEnZuQ3rJDE9L)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton_VM->setToolTip(QApplication::translate("VerifyMessagePage", "Choose an address from the address book", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addressBookButton_VM->setShortcut(QApplication::translate("VerifyMessagePage", "Alt+A", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        statusLabel_VM->setText(QString());
#ifndef QT_NO_TOOLTIP
        clearButton_VM->setToolTip(QApplication::translate("VerifyMessagePage", "Reset all verify message fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearButton_VM->setText(QApplication::translate("VerifyMessagePage", "Clear &All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        verifyMessageButton_VM->setToolTip(QApplication::translate("VerifyMessagePage", "Verify the message to ensure it was signed with the specified Blazecoin address", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        verifyMessageButton_VM->setText(QApplication::translate("VerifyMessagePage", "Verify &Message", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VerifyMessagePage: public Ui_VerifyMessagePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFYMESSAGEPAGE_H
