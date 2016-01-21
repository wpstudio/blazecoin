/********************************************************************************
** Form generated from reading UI file 'askpassphrasedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKPASSPHRASEDIALOG_H
#define UI_ASKPASSPHRASEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AskPassphraseDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QWidget *wCaption;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_26;
    QLabel *lbTitleIcon;
    QLabel *lbTitleEncrypt;
    QLabel *lbTitle;
    QPushButton *bClose;
    QHBoxLayout *horizontalLayout_3;
    QLabel *warningLabel;
    QFormLayout *formLayout;
    QLabel *passLabel1;
    QLineEdit *passEdit1;
    QLabel *passLabel2;
    QLineEdit *passEdit2;
    QLabel *passLabel3;
    QLineEdit *passEdit3;
    QLabel *capsLabel;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AskPassphraseDialog)
    {
        if (AskPassphraseDialog->objectName().isEmpty())
            AskPassphraseDialog->setObjectName(QString::fromUtf8("AskPassphraseDialog"));
        AskPassphraseDialog->resize(550, 226);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AskPassphraseDialog->sizePolicy().hasHeightForWidth());
        AskPassphraseDialog->setSizePolicy(sizePolicy);
        AskPassphraseDialog->setMinimumSize(QSize(550, 0));
        AskPassphraseDialog->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #000000;\n"
"}\n"
"\n"
"#AskPassphraseDialog {\n"
"	background-color: rgb(0, 82, 174);\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border: 1px solid #ededed;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(AskPassphraseDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(AskPassphraseDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("#frame {\n"
"	background-color: #D8DFE9;\n"
"    border-style:none;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
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
        sizePolicy.setHeightForWidth(lbTitleIcon->sizePolicy().hasHeightForWidth());
        lbTitleIcon->setSizePolicy(sizePolicy);
        lbTitleIcon->setMinimumSize(QSize(30, 30));
        lbTitleIcon->setMaximumSize(QSize(30, 30));
        lbTitleIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/change_pass.png")));

        horizontalLayout_19->addWidget(lbTitleIcon);

        lbTitleEncrypt = new QLabel(wCaption);
        lbTitleEncrypt->setObjectName(QString::fromUtf8("lbTitleEncrypt"));
        sizePolicy.setHeightForWidth(lbTitleEncrypt->sizePolicy().hasHeightForWidth());
        lbTitleEncrypt->setSizePolicy(sizePolicy);
        lbTitleEncrypt->setMinimumSize(QSize(30, 30));
        lbTitleEncrypt->setMaximumSize(QSize(30, 30));
        lbTitleEncrypt->setPixmap(QPixmap(QString::fromUtf8(":/res/encrypt.png")));

        horizontalLayout_19->addWidget(lbTitleEncrypt);

        lbTitle = new QLabel(wCaption);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        sizePolicy.setHeightForWidth(lbTitle->sizePolicy().hasHeightForWidth());
        lbTitle->setSizePolicy(sizePolicy);
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


        verticalLayout_2->addWidget(wCaption);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(25, 9, 25, 9);
        warningLabel = new QLabel(frame);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        warningLabel->setFont(font1);
        warningLabel->setTextFormat(Qt::RichText);
        warningLabel->setWordWrap(true);
        warningLabel->setMargin(0);

        horizontalLayout_3->addWidget(warningLabel);


        verticalLayout_2->addLayout(horizontalLayout_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(9);
        formLayout->setVerticalSpacing(9);
        formLayout->setContentsMargins(25, -1, 25, 9);
        passLabel1 = new QLabel(frame);
        passLabel1->setObjectName(QString::fromUtf8("passLabel1"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        passLabel1->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, passLabel1);

        passEdit1 = new QLineEdit(frame);
        passEdit1->setObjectName(QString::fromUtf8("passEdit1"));
        passEdit1->setMinimumSize(QSize(0, 20));
        passEdit1->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, passEdit1);

        passLabel2 = new QLabel(frame);
        passLabel2->setObjectName(QString::fromUtf8("passLabel2"));
        passLabel2->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, passLabel2);

        passEdit2 = new QLineEdit(frame);
        passEdit2->setObjectName(QString::fromUtf8("passEdit2"));
        passEdit2->setMinimumSize(QSize(0, 20));
        passEdit2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passEdit2);

        passLabel3 = new QLabel(frame);
        passLabel3->setObjectName(QString::fromUtf8("passLabel3"));
        passLabel3->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, passLabel3);

        passEdit3 = new QLineEdit(frame);
        passEdit3->setObjectName(QString::fromUtf8("passEdit3"));
        passEdit3->setMinimumSize(QSize(0, 20));
        passEdit3->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, passEdit3);

        capsLabel = new QLabel(frame);
        capsLabel->setObjectName(QString::fromUtf8("capsLabel"));
        capsLabel->setEnabled(true);
        capsLabel->setFont(font2);
        capsLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, capsLabel);


        verticalLayout_2->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 25, -1);
        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(frame);


        retranslateUi(AskPassphraseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AskPassphraseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AskPassphraseDialog, SLOT(reject()));
        QObject::connect(bClose, SIGNAL(clicked()), AskPassphraseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AskPassphraseDialog);
    } // setupUi

    void retranslateUi(QDialog *AskPassphraseDialog)
    {
        AskPassphraseDialog->setWindowTitle(QApplication::translate("AskPassphraseDialog", "Passphrase Dialog", 0, QApplication::UnicodeUTF8));
        lbTitleIcon->setText(QString());
        lbTitleEncrypt->setText(QString());
        lbTitle->setText(QApplication::translate("AskPassphraseDialog", "Change password", 0, QApplication::UnicodeUTF8));
        passLabel1->setText(QApplication::translate("AskPassphraseDialog", "Enter passphrase", 0, QApplication::UnicodeUTF8));
        passLabel2->setText(QApplication::translate("AskPassphraseDialog", "New passphrase", 0, QApplication::UnicodeUTF8));
        passLabel3->setText(QApplication::translate("AskPassphraseDialog", "Repeat new passphrase", 0, QApplication::UnicodeUTF8));
        capsLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AskPassphraseDialog: public Ui_AskPassphraseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKPASSPHRASEDIALOG_H
