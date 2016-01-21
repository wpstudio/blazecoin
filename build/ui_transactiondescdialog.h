/********************************************************************************
** Form generated from reading UI file 'transactiondescdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONDESCDIALOG_H
#define UI_TRANSACTIONDESCDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TransactionDescDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *detailText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TransactionDescDialog)
    {
        if (TransactionDescDialog->objectName().isEmpty())
            TransactionDescDialog->setObjectName(QString::fromUtf8("TransactionDescDialog"));
        TransactionDescDialog->resize(620, 250);
        QPalette palette;
        QBrush brush(QColor(216, 223, 233, 255));
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
        TransactionDescDialog->setPalette(palette);
        QFont font;
        font.setPointSize(8);
        TransactionDescDialog->setFont(font);
        TransactionDescDialog->setStyleSheet(QString::fromUtf8("background-color: #D8DFE9;"));
        verticalLayout = new QVBoxLayout(TransactionDescDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        detailText = new QTextEdit(TransactionDescDialog);
        detailText->setObjectName(QString::fromUtf8("detailText"));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        detailText->setPalette(palette1);
        detailText->setFont(font);
        detailText->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
""));
        detailText->setReadOnly(true);

        verticalLayout->addWidget(detailText);

        buttonBox = new QDialogButtonBox(TransactionDescDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setFont(font);
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
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TransactionDescDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TransactionDescDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TransactionDescDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TransactionDescDialog);
    } // setupUi

    void retranslateUi(QDialog *TransactionDescDialog)
    {
        TransactionDescDialog->setWindowTitle(QApplication::translate("TransactionDescDialog", "Transaction details", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        detailText->setToolTip(QApplication::translate("TransactionDescDialog", "This pane shows a detailed description of the transaction", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class TransactionDescDialog: public Ui_TransactionDescDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONDESCDIALOG_H
