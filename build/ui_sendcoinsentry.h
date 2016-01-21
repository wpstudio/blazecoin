/********************************************************************************
** Form generated from reading UI file 'sendcoinsentry.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSENTRY_H
#define UI_SENDCOINSENTRY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "blazecoinamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendCoinsEntry
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    BlazecoinAmountField *payAmount;
    QValidatedLineEdit *addAsLabel;
    QValidatedLineEdit *payTo;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addButton;
    QPushButton *pasteButton;
    QPushButton *addressBookButton;
    QPushButton *deleteButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QFrame *SendCoinsEntry)
    {
        if (SendCoinsEntry->objectName().isEmpty())
            SendCoinsEntry->setObjectName(QString::fromUtf8("SendCoinsEntry"));
        SendCoinsEntry->resize(729, 112);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SendCoinsEntry->sizePolicy().hasHeightForWidth());
        SendCoinsEntry->setSizePolicy(sizePolicy);
        SendCoinsEntry->setWindowTitle(QString::fromUtf8(""));
        SendCoinsEntry->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid #ededed;\n"
"	background-color: white;\n"
"	min-height: 20px;\n"
"}\n"
"QComboBox {\n"
"	border: 1px solid #ededed;\n"
"	background-color: white;\n"
"	min-height: 20px;\n"
"	max-width: 60px;\n"
"}"));
        SendCoinsEntry->setFrameShape(QFrame::NoFrame);
        SendCoinsEntry->setFrameShadow(QFrame::Sunken);
        SendCoinsEntry->setLineWidth(0);
        gridLayout_2 = new QGridLayout(SendCoinsEntry);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(10);
        label_2 = new QLabel(SendCoinsEntry);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(SendCoinsEntry);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label = new QLabel(SendCoinsEntry);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        payAmount = new BlazecoinAmountField(SendCoinsEntry);
        payAmount->setObjectName(QString::fromUtf8("payAmount"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(payAmount->sizePolicy().hasHeightForWidth());
        payAmount->setSizePolicy(sizePolicy1);
        payAmount->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(payAmount);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        addAsLabel = new QValidatedLineEdit(SendCoinsEntry);
        addAsLabel->setObjectName(QString::fromUtf8("addAsLabel"));

        gridLayout->addWidget(addAsLabel, 1, 1, 1, 1);

        payTo = new QValidatedLineEdit(SendCoinsEntry);
        payTo->setObjectName(QString::fromUtf8("payTo"));
        payTo->setMinimumSize(QSize(300, 22));
        payTo->setMaxLength(34);

        gridLayout->addWidget(payTo, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        addButton = new QPushButton(SendCoinsEntry);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(28, 28));
        addButton->setMaximumSize(QSize(28, 28));
        addButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/add_receiver/normal.png);\n"
"}\n"
"\n"
"QPushButton:!enabled {\n"
"	image: url(:/res/add_receiver/disabled.png);\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	image: url(:/res/add_receiver/pressed.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/add_receiver/hover.png);\n"
"}"));
        addButton->setFlat(true);

        horizontalLayout_2->addWidget(addButton);

        pasteButton = new QPushButton(SendCoinsEntry);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        pasteButton->setMinimumSize(QSize(28, 28));
        pasteButton->setMaximumSize(QSize(28, 28));
        pasteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pasteButton->setFlat(true);

        horizontalLayout_2->addWidget(pasteButton);

        addressBookButton = new QPushButton(SendCoinsEntry);
        addressBookButton->setObjectName(QString::fromUtf8("addressBookButton"));
        addressBookButton->setMinimumSize(QSize(28, 28));
        addressBookButton->setMaximumSize(QSize(28, 28));
        addressBookButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        addressBookButton->setFlat(true);

        horizontalLayout_2->addWidget(addressBookButton);

        deleteButton = new QPushButton(SendCoinsEntry);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(28, 28));
        deleteButton->setMaximumSize(QSize(28, 28));
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/del_receiver/normal.png);\n"
"}\n"
"\n"
"QPushButton:!enabled {\n"
"	image: url(:/res/del_receiver/disabled.png);\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	image: url(:/res/del_receiver/pressed.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/del_receiver/hover.png);\n"
"}"));
        deleteButton->setFlat(true);

        horizontalLayout_2->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(payTo);
        label_4->setBuddy(addAsLabel);
        label->setBuddy(payAmount);
#endif // QT_NO_SHORTCUT

        retranslateUi(SendCoinsEntry);

        QMetaObject::connectSlotsByName(SendCoinsEntry);
    } // setupUi

    void retranslateUi(QFrame *SendCoinsEntry)
    {
        label_2->setText(QApplication::translate("SendCoinsEntry", "Pay &To:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SendCoinsEntry", "&Label:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SendCoinsEntry", "A&mount:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addAsLabel->setToolTip(QApplication::translate("SendCoinsEntry", "Enter a label for this address to add it to your address book", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        payTo->setToolTip(QApplication::translate("SendCoinsEntry", "The address to send the payment to (e.g. MNS17iag9jJgTHD1VXjvLCEnZuQ3rJDE9L)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("SendCoinsEntry", "Send to multiple recipients at once", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addButton->setText(QString());
        addButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+P", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Paste address from clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("SendCoinsEntry", "Choose address from address book", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+P", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Remove this recipient", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
        Q_UNUSED(SendCoinsEntry);
    } // retranslateUi

};

namespace Ui {
    class SendCoinsEntry: public Ui_SendCoinsEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSENTRY_H
