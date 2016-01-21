/********************************************************************************
** Form generated from reading UI file 'signmessagepage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNMESSAGEPAGE_H
#define UI_SIGNMESSAGEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SignMessagePage
{
public:
    QVBoxLayout *verticalLayout_4;
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
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_5;
    QLabel *label_40;
    QPushButton *addressBookButton_SM;
    QPushButton *pasteButton_SM;
    QLabel *label_39;
    QValidatedLineEdit *addressIn_SM;
    QLabel *label_41;
    QPlainTextEdit *messageIn_SM;
    QPushButton *copySignatureButton_SM;
    QLineEdit *signatureOut_SM;
    QLabel *statusLabel_SM;
    QWidget *wAcceptHolder;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_30;
    QPushButton *clearButton_SM;
    QPushButton *signMessageButton_SM;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_31;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SignMessagePage)
    {
        if (SignMessagePage->objectName().isEmpty())
            SignMessagePage->setObjectName(QString::fromUtf8("SignMessagePage"));
        SignMessagePage->resize(750, 370);
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
        SignMessagePage->setPalette(palette);
        SignMessagePage->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 1px solid #ededed;\n"
"}\n"
""));
        verticalLayout_4 = new QVBoxLayout(SignMessagePage);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineBeforeAddressBook_3 = new QFrame(SignMessagePage);
        lineBeforeAddressBook_3->setObjectName(QString::fromUtf8("lineBeforeAddressBook_3"));
        lineBeforeAddressBook_3->setStyleSheet(QString::fromUtf8("background-color: #0052AE;"));
        lineBeforeAddressBook_3->setFrameShadow(QFrame::Raised);
        lineBeforeAddressBook_3->setLineWidth(0);
        lineBeforeAddressBook_3->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(lineBeforeAddressBook_3);

        wHeader = new QWidget(SignMessagePage);
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
        label_37->setPixmap(QPixmap(QString::fromUtf8(":/res/sign_message_icon.png")));

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


        verticalLayout_4->addWidget(wHeader);

        wContainer = new QWidget(SignMessagePage);
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

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, -1);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, 6, -1, 3);
        label_40 = new QLabel(wContainer);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_40->setFont(font1);
        label_40->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}"));
        label_40->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_40->setMargin(5);

        gridLayout_5->addWidget(label_40, 2, 0, 1, 1);

        addressBookButton_SM = new QPushButton(wContainer);
        addressBookButton_SM->setObjectName(QString::fromUtf8("addressBookButton_SM"));
        addressBookButton_SM->setMinimumSize(QSize(28, 28));
        addressBookButton_SM->setMaximumSize(QSize(28, 28));
        addressBookButton_SM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        addressBookButton_SM->setFlat(true);

        gridLayout_5->addWidget(addressBookButton_SM, 0, 3, 1, 1);

        pasteButton_SM = new QPushButton(wContainer);
        pasteButton_SM->setObjectName(QString::fromUtf8("pasteButton_SM"));
        pasteButton_SM->setMinimumSize(QSize(28, 28));
        pasteButton_SM->setMaximumSize(QSize(28, 28));
        pasteButton_SM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/paste/normal.png);\n"
"}\n"
"\n"
"QPushButton:!enabled {\n"
"	image: url(:/res/paste/disabled.png);\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	image: url(:/res/paste/pressed.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/paste/hover.png);\n"
"}"));
        pasteButton_SM->setFlat(true);

        gridLayout_5->addWidget(pasteButton_SM, 0, 2, 1, 1);

        label_39 = new QLabel(wContainer);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setFont(font1);
        label_39->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}"));
        label_39->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_39->setMargin(5);

        gridLayout_5->addWidget(label_39, 0, 0, 1, 1);

        addressIn_SM = new QValidatedLineEdit(wContainer);
        addressIn_SM->setObjectName(QString::fromUtf8("addressIn_SM"));
        addressIn_SM->setMinimumSize(QSize(0, 20));
        QFont font2;
        font2.setPointSize(10);
        addressIn_SM->setFont(font2);
        addressIn_SM->setMaxLength(34);

        gridLayout_5->addWidget(addressIn_SM, 0, 1, 1, 1);

        label_41 = new QLabel(wContainer);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setFont(font1);
        label_41->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}"));
        label_41->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_41->setMargin(5);

        gridLayout_5->addWidget(label_41, 1, 0, 1, 1);

        messageIn_SM = new QPlainTextEdit(wContainer);
        messageIn_SM->setObjectName(QString::fromUtf8("messageIn_SM"));
        messageIn_SM->setFont(font2);
        messageIn_SM->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"	border: 1px solid #ededed;\n"
"}"));
        messageIn_SM->setBackgroundVisible(false);

        gridLayout_5->addWidget(messageIn_SM, 1, 1, 1, 1);

        copySignatureButton_SM = new QPushButton(wContainer);
        copySignatureButton_SM->setObjectName(QString::fromUtf8("copySignatureButton_SM"));
        copySignatureButton_SM->setMinimumSize(QSize(28, 28));
        copySignatureButton_SM->setMaximumSize(QSize(28, 28));
        copySignatureButton_SM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/copy/normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	image: url(:/res/copy/pressed.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/copy/hover.png);\n"
"}"));
        copySignatureButton_SM->setFlat(true);

        gridLayout_5->addWidget(copySignatureButton_SM, 2, 2, 1, 1);

        signatureOut_SM = new QLineEdit(wContainer);
        signatureOut_SM->setObjectName(QString::fromUtf8("signatureOut_SM"));
        signatureOut_SM->setMinimumSize(QSize(0, 20));
        signatureOut_SM->setFont(font2);
        signatureOut_SM->setReadOnly(true);

        gridLayout_5->addWidget(signatureOut_SM, 2, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_5);

        statusLabel_SM = new QLabel(wContainer);
        statusLabel_SM->setObjectName(QString::fromUtf8("statusLabel_SM"));
        statusLabel_SM->setFont(font1);
        statusLabel_SM->setAlignment(Qt::AlignCenter);
        statusLabel_SM->setWordWrap(true);

        verticalLayout_3->addWidget(statusLabel_SM);

        wAcceptHolder = new QWidget(wContainer);
        wAcceptHolder->setObjectName(QString::fromUtf8("wAcceptHolder"));
        wAcceptHolder->setMinimumSize(QSize(0, 26));
        horizontalLayout_22 = new QHBoxLayout(wAcceptHolder);
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_30);

        clearButton_SM = new QPushButton(wAcceptHolder);
        clearButton_SM->setObjectName(QString::fromUtf8("clearButton_SM"));
        clearButton_SM->setMinimumSize(QSize(160, 20));
        clearButton_SM->setMaximumSize(QSize(160, 20));
        QFont font3;
        font3.setPointSize(10);
        font3.setStyleStrategy(QFont::PreferAntialias);
        clearButton_SM->setFont(font3);
        clearButton_SM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        clearButton_SM->setFlat(true);

        horizontalLayout_22->addWidget(clearButton_SM);

        signMessageButton_SM = new QPushButton(wAcceptHolder);
        signMessageButton_SM->setObjectName(QString::fromUtf8("signMessageButton_SM"));
        signMessageButton_SM->setFont(font3);
        signMessageButton_SM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #758EB3;\n"
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
        signMessageButton_SM->setFlat(true);

        horizontalLayout_22->addWidget(signMessageButton_SM);

        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(wAcceptHolder);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_31 = new QSpacerItem(136, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_31);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 7);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_4->addWidget(wContainer);

#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(SignMessagePage);

        QMetaObject::connectSlotsByName(SignMessagePage);
    } // setupUi

    void retranslateUi(QWidget *SignMessagePage)
    {
        SignMessagePage->setWindowTitle(QApplication::translate("SignMessagePage", "Form", 0, QApplication::UnicodeUTF8));
        label_37->setText(QString());
        label_38->setText(QApplication::translate("SignMessagePage", "Sign Message", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("SignMessagePage", "Signature", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addressBookButton_SM->setToolTip(QApplication::translate("SignMessagePage", "Choose an address from the address book", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addressBookButton_SM->setShortcut(QApplication::translate("SignMessagePage", "Alt+A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pasteButton_SM->setToolTip(QApplication::translate("SignMessagePage", "Paste address from clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pasteButton_SM->setShortcut(QApplication::translate("SignMessagePage", "Alt+P", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("SignMessagePage", "Address", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addressIn_SM->setToolTip(QApplication::translate("SignMessagePage", "The address to sign the message with (e.g. WDS17iag9jJgTHD1VXjvLCEnZuQ3rJDE9L)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_41->setText(QApplication::translate("SignMessagePage", "Text", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        messageIn_SM->setToolTip(QApplication::translate("SignMessagePage", "Enter the message you want to sign here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        messageIn_SM->setPlainText(QString());
#ifndef QT_NO_TOOLTIP
        copySignatureButton_SM->setToolTip(QApplication::translate("SignMessagePage", "Copy the current signature to the system clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        copySignatureButton_SM->setText(QString());
        statusLabel_SM->setText(QString());
#ifndef QT_NO_TOOLTIP
        clearButton_SM->setToolTip(QApplication::translate("SignMessagePage", "Reset all sign message fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearButton_SM->setText(QApplication::translate("SignMessagePage", "Clear &All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        signMessageButton_SM->setToolTip(QApplication::translate("SignMessagePage", "Sign the message to prove you own this Blazecoin address", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        signMessageButton_SM->setText(QApplication::translate("SignMessagePage", "Sign &Message", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SignMessagePage: public Ui_SignMessagePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNMESSAGEPAGE_H
