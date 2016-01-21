/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
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
    QSpacerItem *horizontalSpacer5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QLabel *versionLabel;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_222;
    QSpacerItem *horizontalSpacer555;
    QHBoxLayout *horizontalLayout_cop2;
    QLabel *copyrightLabel;
    QSpacerItem *horizontalSpacer_222;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer56;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *verticalSpacer_3;
    QWidget *wAcceptHolder;
    QHBoxLayout *horizontalLayout1;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bAccept;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(555, 360);
        AboutDialog->setMinimumSize(QSize(555, 360));
        AboutDialog->setMaximumSize(QSize(555, 372));
        AboutDialog->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #000000;\n"
"}\n"
"\n"
"QDialog {\n"
"	background-color: rgb(158, 0, 15);\n"
"}\n"
"\n"
""));
        verticalLayout_2 = new QVBoxLayout(AboutDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        frame = new QFrame(AboutDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("#frame {\n"
"	background-color: #D8DFE9;\n"
"    border-style:none;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        wCaption = new QWidget(frame);
        wCaption->setObjectName(QString::fromUtf8("wCaption"));
        wCaption->setMinimumSize(QSize(0, 35));
        wCaption->setMaximumSize(QSize(16777215, 35));
        wCaption->setStyleSheet(QString::fromUtf8("#wCaption {\n"
"	background-color:  rgb(158, 0, 15);\n"
"}"));
        wCaption->setProperty("is_header", QVariant(true));
        horizontalLayout_19 = new QHBoxLayout(wCaption);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_26 = new QSpacerItem(7, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_26);

        lbTitleIcon = new QLabel(wCaption);
        lbTitleIcon->setObjectName(QString::fromUtf8("lbTitleIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbTitleIcon->sizePolicy().hasHeightForWidth());
        lbTitleIcon->setSizePolicy(sizePolicy);
        lbTitleIcon->setMinimumSize(QSize(30, 30));
        lbTitleIcon->setMaximumSize(QSize(30, 30));
        lbTitleIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/logo_small.png")));

        horizontalLayout_19->addWidget(lbTitleIcon);

        lbTitle = new QLabel(wCaption);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        QFont font;
        font.setPointSize(11);
        font.setStyleStrategy(QFont::PreferAntialias);
        lbTitle->setFont(font);
        lbTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #FFFFFF;\n"
"}"));

        horizontalLayout_19->addWidget(lbTitle);

        bClose = new QPushButton(wCaption);
        bClose->setObjectName(QString::fromUtf8("bClose"));
        bClose->setMinimumSize(QSize(30, 30));
        bClose->setMaximumSize(QSize(30, 30));
        bClose->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer5 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(4, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        versionLabel = new QLabel(frame);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setFont(font1);
        versionLabel->setCursor(QCursor(Qt::IBeamCursor));
        versionLabel->setText(QString::fromUtf8("0.8.5-beta"));
        versionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(versionLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(65, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_222 = new QHBoxLayout();
        horizontalLayout_222->setObjectName(QString::fromUtf8("horizontalLayout_222"));
        horizontalSpacer555 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_222->addItem(horizontalSpacer555);

        horizontalLayout_cop2 = new QHBoxLayout();
        horizontalLayout_cop2->setObjectName(QString::fromUtf8("horizontalLayout_cop2"));
        copyrightLabel = new QLabel(frame);
        copyrightLabel->setObjectName(QString::fromUtf8("copyrightLabel"));
        copyrightLabel->setFont(font1);
        copyrightLabel->setCursor(QCursor(Qt::IBeamCursor));
        copyrightLabel->setText(QString::fromUtf8("<html><head/><body><p>Copyright &amp;copy; 2012-2014 Peercoin<br />Copyright &amp;copy; 2013-2014 Blazecoin</p></body></html>"));
        copyrightLabel->setTextFormat(Qt::RichText);
        copyrightLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_cop2->addWidget(copyrightLabel);


        horizontalLayout_222->addLayout(horizontalLayout_cop2);

        horizontalSpacer_222 = new QSpacerItem(65, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_222->addItem(horizontalSpacer_222);


        verticalLayout->addLayout(horizontalLayout_222);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalSpacer56 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer56);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setCursor(QCursor(Qt::IBeamCursor));
        label_2->setWordWrap(true);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_23->addWidget(label_2);

        horizontalSpacer_23 = new QSpacerItem(65, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_23);


        verticalLayout->addLayout(horizontalLayout_23);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        wAcceptHolder = new QWidget(frame);
        wAcceptHolder->setObjectName(QString::fromUtf8("wAcceptHolder"));
        wAcceptHolder->setMinimumSize(QSize(0, 20));
        horizontalLayout1 = new QHBoxLayout(wAcceptHolder);
        horizontalLayout1->setSpacing(0);
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        horizontalLayout1->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1->addItem(horizontalSpacer_3);

        bAccept = new QPushButton(wAcceptHolder);
        bAccept->setObjectName(QString::fromUtf8("bAccept"));
        QFont font2;
        font2.setPointSize(10);
        font2.setStyleStrategy(QFont::PreferAntialias);
        bAccept->setFont(font2);
        bAccept->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #9e6b70;\n"
"	color: #FFFFFF;\n"
"	border: 0px solid gray;\n"
"	max-height: 20px;\n"
"	min-height: 20px;\n"
"	max-width: 160px;\n"
"	min-width: 160px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #ff051d;\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	background-color: #ff051d;\n"
"}"));
        bAccept->setFlat(true);

        horizontalLayout1->addWidget(bAccept);

        horizontalSpacer_4 = new QSpacerItem(65, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout1->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(wAcceptHolder);

        verticalSpacer_2 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addWidget(frame);


        retranslateUi(AboutDialog);
        QObject::connect(bAccept, SIGNAL(clicked()), AboutDialog, SLOT(accept()));
        QObject::connect(bClose, SIGNAL(clicked()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        lbTitleIcon->setText(QString());
        lbTitle->setText(QApplication::translate("AboutDialog", "Information about program", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AboutDialog", "<b>Blazecoin</b> version", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AboutDialog", "\n"
"This is experimental software.\n"
"\n"
"Distributed under the MIT/X11 software license, see the accompanying file COPYING or http://www.opensource.org/licenses/mit-license.php.\n"
"This product includes software developed by the OpenSSL Project for use in the OpenSSL Toolkit (http://www.openssl.org/) and cryptographic software written by Eric Young (eay@cryptsoft.com) and UPnP software written by Thomas Bernard.", 0, QApplication::UnicodeUTF8));
        bAccept->setText(QApplication::translate("AboutDialog", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
