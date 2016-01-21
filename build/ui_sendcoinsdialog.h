/********************************************************************************
** Form generated from reading UI file 'sendcoinsdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSDIALOG_H
#define UI_SENDCOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendCoinsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *line_7;
    QWidget *wSendMegsHeader;
    QLabel *label_29;
    QLabel *label_30;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *entries;
    QSpacerItem *verticalSpacer;
    QWidget *wContainer;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *labelBalance;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *clearButton;
    QPushButton *sendButton;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *SendCoinsDialog)
    {
        if (SendCoinsDialog->objectName().isEmpty())
            SendCoinsDialog->setObjectName(QString::fromUtf8("SendCoinsDialog"));
        SendCoinsDialog->resize(792, 217);
        QPalette palette;
        QBrush brush(QColor(0, 117, 209, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        SendCoinsDialog->setPalette(palette);
        SendCoinsDialog->setStyleSheet(QString::fromUtf8("#SendCoinsDialog {\n"
"	background-color: #0075d1;\n"
"}"));
        verticalLayout = new QVBoxLayout(SendCoinsDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        line_7 = new QFrame(SendCoinsDialog);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setStyleSheet(QString::fromUtf8("background-color: #0052AE;"));
        line_7->setFrameShadow(QFrame::Raised);
        line_7->setLineWidth(0);
        line_7->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_7);

        wSendMegsHeader = new QWidget(SendCoinsDialog);
        wSendMegsHeader->setObjectName(QString::fromUtf8("wSendMegsHeader"));
        wSendMegsHeader->setMinimumSize(QSize(0, 32));
        wSendMegsHeader->setMaximumSize(QSize(16777215, 32));
        wSendMegsHeader->setStyleSheet(QString::fromUtf8("#wSendMegsHeader {\n"
"\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));
        wSendMegsHeader->setProperty("is_header", QVariant(true));
        label_29 = new QLabel(wSendMegsHeader);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(9, 1, 37, 30));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy);
        label_29->setMinimumSize(QSize(30, 30));
        label_29->setMaximumSize(QSize(44, 42));
        label_29->setPixmap(QPixmap(QString::fromUtf8(":/res/download.png")));
        label_30 = new QLabel(wSendMegsHeader);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(48, 7, 125, 18));
        QFont font;
        font.setPointSize(11);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_30->setFont(font);
        label_30->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #fff;\n"
"}"));

        verticalLayout->addWidget(wSendMegsHeader);

        scrollArea = new QScrollArea(SendCoinsDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
"     border: 0px solid grey;\n"
"     background: white;\n"
"     width: 9px;\n"
"     margin: 0px 0px 0 0px;\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"     background: #D8DFE9;\n"
"     min-width: 20px;\n"
" }"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 783, 142));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("#scrollAreaWidgetContents {\n"
"	background-color: #D8DFE9;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 1, 0, 0);
        entries = new QVBoxLayout();
        entries->setSpacing(6);
        entries->setObjectName(QString::fromUtf8("entries"));

        verticalLayout_2->addLayout(entries);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        wContainer = new QWidget(SendCoinsDialog);
        wContainer->setObjectName(QString::fromUtf8("wContainer"));
        wContainer->setStyleSheet(QString::fromUtf8("#wContainer {\n"
"	background-color: #D8DFE9;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(wContainer);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 10, -1, 10);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(wContainer);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}"));

        horizontalLayout_2->addWidget(label);

        labelBalance = new QLabel(wContainer);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setFont(font1);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelBalance);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        clearButton = new QPushButton(wContainer);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QFont font2;
        font2.setPointSize(10);
        font2.setStyleStrategy(QFont::PreferAntialias);
        clearButton->setFont(font2);
        clearButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"	background-color: #9D0B17;\n"
"}"));
        clearButton->setAutoDefault(false);
        clearButton->setDefault(false);
        clearButton->setFlat(true);

        horizontalLayout_3->addWidget(clearButton);

        sendButton = new QPushButton(wContainer);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setFont(font2);
        sendButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"	background-color: #9D0B17;\n"
"}"));
        sendButton->setDefault(true);
        sendButton->setFlat(true);

        horizontalLayout_3->addWidget(sendButton);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(wContainer);


        retranslateUi(SendCoinsDialog);

        QMetaObject::connectSlotsByName(SendCoinsDialog);
    } // setupUi

    void retranslateUi(QDialog *SendCoinsDialog)
    {
        SendCoinsDialog->setWindowTitle(QApplication::translate("SendCoinsDialog", "Send Coins", 0, QApplication::UnicodeUTF8));
        label_29->setText(QString());
        label_30->setText(QApplication::translate("SendCoinsDialog", "Send Blazecoins", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SendCoinsDialog", "Balance:", 0, QApplication::UnicodeUTF8));
        labelBalance->setText(QApplication::translate("SendCoinsDialog", "123.456 WDC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("SendCoinsDialog", "Remove all transaction fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("SendCoinsDialog", "Clear &All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sendButton->setToolTip(QApplication::translate("SendCoinsDialog", "Confirm the send action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sendButton->setText(QApplication::translate("SendCoinsDialog", "S&end", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SendCoinsDialog: public Ui_SendCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSDIALOG_H
