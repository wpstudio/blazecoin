/********************************************************************************
** Form generated from reading UI file 'message_box_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_BOX_DIALOG_H
#define UI_MESSAGE_BOX_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageBoxDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QWidget *wCaption;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_26;
    QLabel *lbTitleIcon;
    QLabel *lbTitle;
    QPushButton *bClose;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *lbMainText;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *wAcceptHolder;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bSign;
    QSpacerItem *horizontalSpacer_4;
    QWidget *wYesNoHolder;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *bYes;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *bNo;
    QSpacerItem *horizontalSpacer_8;
    QWidget *wCheckboxHolder;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_11;
    QCheckBox *cbDontShow;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *MessageBoxDialog)
    {
        if (MessageBoxDialog->objectName().isEmpty())
            MessageBoxDialog->setObjectName(QString::fromUtf8("MessageBoxDialog"));
        MessageBoxDialog->resize(562, 212);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MessageBoxDialog->sizePolicy().hasHeightForWidth());
        MessageBoxDialog->setSizePolicy(sizePolicy);
        MessageBoxDialog->setMinimumSize(QSize(550, 0));
        MessageBoxDialog->setStyleSheet(QString::fromUtf8("#MessageBoxDialog {\n"
"	background-color: rgb(0, 82, 174);\n"
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
"}"));
        verticalLayout_2 = new QVBoxLayout(MessageBoxDialog);
#ifndef Q_OS_MAC
        verticalLayout_2->setSpacing(6);
#endif
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(MessageBoxDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("#frame {\n"
"	background-color: #D8DFE9;\n"
"    border-style:none;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        wCaption = new QWidget(frame);
        wCaption->setObjectName(QString::fromUtf8("wCaption"));
        wCaption->setMinimumSize(QSize(0, 35));
        wCaption->setMaximumSize(QSize(16777215, 35));
        wCaption->setStyleSheet(QString::fromUtf8("#wCaption {\n"
"	background-color:  rgb(0, 82, 174);\n"
"}"));
        wCaption->setProperty("is_header", QVariant(true));
        horizontalLayout_19 = new QHBoxLayout(wCaption);
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalSpacer_26 = new QSpacerItem(7, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_26);

        lbTitleIcon = new QLabel(wCaption);
        lbTitleIcon->setObjectName(QString::fromUtf8("lbTitleIcon"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbTitleIcon->sizePolicy().hasHeightForWidth());
        lbTitleIcon->setSizePolicy(sizePolicy1);
        lbTitleIcon->setMinimumSize(QSize(30, 30));
        lbTitleIcon->setMaximumSize(QSize(30, 30));

        horizontalLayout_19->addWidget(lbTitleIcon);

        lbTitle = new QLabel(wCaption);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        QFont font;
        font.setPointSize(11);
        font.setStyleStrategy(QFont::PreferAntialias);
        lbTitle->setFont(font);
        lbTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #E9D9D8;\n"
"}"));

        horizontalLayout_19->addWidget(lbTitle);

        bClose = new QPushButton(wCaption);
        bClose->setObjectName(QString::fromUtf8("bClose"));
        bClose->setMinimumSize(QSize(30, 30));
        bClose->setMaximumSize(QSize(30, 30));
        bClose->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	image: url(:/res/close_normal.png);\n"
"	border: 0px solid gray;\n"
"}\n"
"QPushButton:pressed:flat {\n"
"	image: url(:/res/close_normal.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/close_hover.png);\n"
"}"));
        bClose->setText(QString::fromUtf8(""));
        bClose->setFlat(true);

        horizontalLayout_19->addWidget(bClose);


        verticalLayout->addWidget(wCaption);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        lbMainText = new QLabel(frame);
        lbMainText->setObjectName(QString::fromUtf8("lbMainText"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        lbMainText->setFont(font1);
        lbMainText->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}"));
        lbMainText->setText(QString::fromUtf8("Message"));
        lbMainText->setScaledContents(true);
        lbMainText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbMainText->setWordWrap(true);
        lbMainText->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(lbMainText);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        wAcceptHolder = new QWidget(frame);
        wAcceptHolder->setObjectName(QString::fromUtf8("wAcceptHolder"));
        wAcceptHolder->setMinimumSize(QSize(0, 22));
        horizontalLayout = new QHBoxLayout(wAcceptHolder);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        bSign = new QPushButton(wAcceptHolder);
        bSign->setObjectName(QString::fromUtf8("bSign"));
        QFont font2;
        font2.setPointSize(10);
        font2.setStyleStrategy(QFont::PreferAntialias);
        bSign->setFont(font2);
        bSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        bSign->setFlat(true);

        horizontalLayout->addWidget(bSign);

        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(wAcceptHolder);

        wYesNoHolder = new QWidget(frame);
        wYesNoHolder->setObjectName(QString::fromUtf8("wYesNoHolder"));
        wYesNoHolder->setMinimumSize(QSize(0, 22));
        horizontalLayout_4 = new QHBoxLayout(wYesNoHolder);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        bYes = new QPushButton(wYesNoHolder);
        bYes->setObjectName(QString::fromUtf8("bYes"));
        bYes->setFont(font2);
        bYes->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        bYes->setFlat(true);

        horizontalLayout_4->addWidget(bYes);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        bNo = new QPushButton(wYesNoHolder);
        bNo->setObjectName(QString::fromUtf8("bNo"));
        bNo->setFont(font2);
        bNo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        bNo->setFlat(true);

        horizontalLayout_4->addWidget(bNo);

        horizontalSpacer_8 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addWidget(wYesNoHolder);

        wCheckboxHolder = new QWidget(frame);
        wCheckboxHolder->setObjectName(QString::fromUtf8("wCheckboxHolder"));
        wCheckboxHolder->setMinimumSize(QSize(0, 22));
        horizontalLayout_5 = new QHBoxLayout(wCheckboxHolder);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 10, 0, 0);
        horizontalSpacer_11 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        cbDontShow = new QCheckBox(wCheckboxHolder);
        cbDontShow->setObjectName(QString::fromUtf8("cbDontShow"));
        cbDontShow->setFont(font1);

        horizontalLayout_5->addWidget(cbDontShow);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout->addWidget(wCheckboxHolder);

        verticalSpacer_2 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(2, 1);

        verticalLayout_2->addWidget(frame);


        retranslateUi(MessageBoxDialog);
        QObject::connect(bSign, SIGNAL(clicked()), MessageBoxDialog, SLOT(accept()));
        QObject::connect(bClose, SIGNAL(clicked()), MessageBoxDialog, SLOT(reject()));
        QObject::connect(bYes, SIGNAL(clicked()), MessageBoxDialog, SLOT(accept()));
        QObject::connect(bNo, SIGNAL(clicked()), MessageBoxDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MessageBoxDialog);
    } // setupUi

    void retranslateUi(QDialog *MessageBoxDialog)
    {
        MessageBoxDialog->setWindowTitle(QString());
        lbTitleIcon->setText(QString());
        lbTitle->setText(QString());
        bSign->setText(QApplication::translate("MessageBoxDialog", "OK", 0, QApplication::UnicodeUTF8));
        bYes->setText(QApplication::translate("MessageBoxDialog", "Yes", 0, QApplication::UnicodeUTF8));
        bNo->setText(QApplication::translate("MessageBoxDialog", "No", 0, QApplication::UnicodeUTF8));
        cbDontShow->setText(QApplication::translate("MessageBoxDialog", "Don't show again", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MessageBoxDialog: public Ui_MessageBoxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_BOX_DIALOG_H
