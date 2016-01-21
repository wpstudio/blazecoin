/********************************************************************************
** Form generated from reading UI file 'editaddressdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITADDRESSDIALOG_H
#define UI_EDITADDRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditAddressDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QWidget *wCaption;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_26;
    QLabel *picEdit;
    QLabel *picAdd;
    QLabel *lbTitle;
    QPushButton *bClose;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QWidget *wContent;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *addressEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;
    QLineEdit *labelEdit;
    QLabel *label_2;
    QPushButton *pasteButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *EditAddressDialog)
    {
        if (EditAddressDialog->objectName().isEmpty())
            EditAddressDialog->setObjectName(QString::fromUtf8("EditAddressDialog"));
        EditAddressDialog->resize(517, 154);
        EditAddressDialog->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}\n"
"\n"
"QDialog {\n"
"	background-color: rgb(0, 82, 174);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(EditAddressDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(EditAddressDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("#frame {\n"
"	background-color: #D8DFE9;\n"
"    border-style:none;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        wCaption = new QWidget(frame);
        wCaption->setObjectName(QString::fromUtf8("wCaption"));
        wCaption->setMinimumSize(QSize(0, 32));
        wCaption->setMaximumSize(QSize(16777215, 32));
        wCaption->setStyleSheet(QString::fromUtf8("#wCaption {\n"
"	background-color:  rgb(0, 82, 174);\n"
"}"));
        wCaption->setProperty("is_header", QVariant(true));
        horizontalLayout_19 = new QHBoxLayout(wCaption);
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalSpacer_26 = new QSpacerItem(7, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_26);

        picEdit = new QLabel(wCaption);
        picEdit->setObjectName(QString::fromUtf8("picEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(picEdit->sizePolicy().hasHeightForWidth());
        picEdit->setSizePolicy(sizePolicy);
        picEdit->setMinimumSize(QSize(30, 30));
        picEdit->setMaximumSize(QSize(30, 30));
        picEdit->setPixmap(QPixmap(QString::fromUtf8(":/res/edit_record_icon.png")));

        horizontalLayout_19->addWidget(picEdit);

        picAdd = new QLabel(wCaption);
        picAdd->setObjectName(QString::fromUtf8("picAdd"));
        picAdd->setEnabled(true);
        sizePolicy.setHeightForWidth(picAdd->sizePolicy().hasHeightForWidth());
        picAdd->setSizePolicy(sizePolicy);
        picAdd->setMinimumSize(QSize(30, 30));
        picAdd->setMaximumSize(QSize(30, 30));
        picAdd->setPixmap(QPixmap(QString::fromUtf8(":/res/add_record_icon.png")));

        horizontalLayout_19->addWidget(picAdd);

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

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        wContent = new QWidget(frame);
        wContent->setObjectName(QString::fromUtf8("wContent"));
        gridLayout = new QGridLayout(wContent);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(wContent);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setMargin(5);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        addressEdit = new QLineEdit(wContent);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        addressEdit->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(addressEdit, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        buttonBox = new QDialogButtonBox(wContent);
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
"	background-color: #0099CC;\n"
"}"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        labelEdit = new QLineEdit(wContent);
        labelEdit->setObjectName(QString::fromUtf8("labelEdit"));
        labelEdit->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(labelEdit, 0, 1, 1, 1);

        label_2 = new QLabel(wContent);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setMargin(5);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pasteButton = new QPushButton(wContent);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        pasteButton->setMinimumSize(QSize(28, 28));
        pasteButton->setMaximumSize(QSize(28, 28));
        pasteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/paste/normal.png);	\n"
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
        pasteButton->setFlat(true);

        gridLayout->addWidget(pasteButton, 1, 2, 1, 1);


        horizontalLayout_2->addWidget(wContent);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(frame);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(labelEdit);
        label_2->setBuddy(addressEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(EditAddressDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditAddressDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditAddressDialog, SLOT(reject()));
        QObject::connect(bClose, SIGNAL(clicked()), EditAddressDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditAddressDialog);
    } // setupUi

    void retranslateUi(QDialog *EditAddressDialog)
    {
        EditAddressDialog->setWindowTitle(QString());
        picEdit->setText(QString());
        picAdd->setText(QString());
        lbTitle->setText(QApplication::translate("EditAddressDialog", "Edit record", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EditAddressDialog", "&Label", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addressEdit->setToolTip(QApplication::translate("EditAddressDialog", "The address associated with this address book entry. This can only be modified for sending addresses.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelEdit->setToolTip(QApplication::translate("EditAddressDialog", "The label associated with this address book entry", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("EditAddressDialog", "&Address", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("EditAddressDialog", "Paste from clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("EditAddressDialog", "Alt+A", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditAddressDialog: public Ui_EditAddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITADDRESSDIALOG_H
