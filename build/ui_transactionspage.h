/********************************************************************************
** Form generated from reading UI file 'transactionspage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONSPAGE_H
#define UI_TRANSACTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactionsPage
{
public:
    QVBoxLayout *verticalLayout_9;
    QFrame *line_3;
    QWidget *wTransactionsHeader;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_20;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_21;
    QWidget *wTransactionsContainer;
    QTableView *transactionView;
    QLineEdit *amountWidget;
    QLineEdit *addressWidget;
    QComboBox *dateWidget;
    QPushButton *bTransactionsSortOrder;
    QComboBox *typeWidget;

    void setupUi(QWidget *TransactionsPage)
    {
        if (TransactionsPage->objectName().isEmpty())
            TransactionsPage->setObjectName(QString::fromUtf8("TransactionsPage"));
        TransactionsPage->resize(792, 438);
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
        TransactionsPage->setPalette(palette);
        verticalLayout_9 = new QVBoxLayout(TransactionsPage);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        line_3 = new QFrame(TransactionsPage);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setStyleSheet(QString::fromUtf8("background-color: #0052AE;"));
        line_3->setLineWidth(0);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(line_3);

        wTransactionsHeader = new QWidget(TransactionsPage);
        wTransactionsHeader->setObjectName(QString::fromUtf8("wTransactionsHeader"));
        wTransactionsHeader->setMinimumSize(QSize(0, 32));
        wTransactionsHeader->setMaximumSize(QSize(16777215, 32));
        wTransactionsHeader->setStyleSheet(QString::fromUtf8("#wTransactionsHeader {\n"
"	background-color: black;\n"
"}"));
        wTransactionsHeader->setProperty("is_header", QVariant(true));
        horizontalLayout_10 = new QHBoxLayout(wTransactionsHeader);
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_14 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_14);

        label_20 = new QLabel(wTransactionsHeader);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setMinimumSize(QSize(25, 25));
        label_20->setMaximumSize(QSize(25, 25));
        label_20->setText(QString::fromUtf8(""));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/res/last_transactions.png")));

        horizontalLayout_10->addWidget(label_20);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_21 = new QLabel(wTransactionsHeader);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        QFont font;
        font.setPointSize(11);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_21->setFont(font);
        label_21->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #FFFFFF;\n"
"}"));

        verticalLayout_10->addWidget(label_21);


        horizontalLayout_10->addLayout(verticalLayout_10);


        verticalLayout_9->addWidget(wTransactionsHeader);

        wTransactionsContainer = new QWidget(TransactionsPage);
        wTransactionsContainer->setObjectName(QString::fromUtf8("wTransactionsContainer"));
        wTransactionsContainer->setStyleSheet(QString::fromUtf8("#wTransactionsContainer {\n"
"	background-color: #D8DFE9;\n"
" }\n"
"\n"
"QLabel {\n"
"	color: #0052AE;\n"
"}\n"
""));
        transactionView = new QTableView(wTransactionsContainer);
        transactionView->setObjectName(QString::fromUtf8("transactionView"));
        transactionView->setGeometry(QRect(-1, 44, 794, 360));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(transactionView->sizePolicy().hasHeightForWidth());
        transactionView->setSizePolicy(sizePolicy1);
        transactionView->setMaximumSize(QSize(794, 16777215));
        QFont font1;
        font1.setPointSize(8);
        transactionView->setFont(font1);
        transactionView->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
"     border: 0px solid grey;\n"
"     background: white;\n"
"     width: 9px;\n"
"     margin: 15px 0px 0 0px;\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"     background: #D8DFE9;\n"
"     min-width: 20px;\n"
" }\n"
"QScrollBar::sub-line:vertical {\n"
"	height: 0px;\n"
"    width: 0px;\n"
"}\n"
"\n"
"QHeaderView {\n"
"	background-color: #D8DFE9;\n"
"	font-size: 10;\n"
"	text-align:left;\n"
"}\n"
"QHeaderView::section {\n"
"    background-color: #D8DFE9;\n"
"    color: #0052AE;\n"
"    padding-left: 5px;\n"
"    border: 0px solid #6c6c6c;\n"
"	text-align:left;\n"
"}\n"
"\n"
"/* style the sort indicator */\n"
"QHeaderView::down-arrow {\n"
"    image: url(down_arrow.png);\n"
"}\n"
"\n"
"QHeaderView::up-arrow {\n"
"    image: url(up_arrow.png);\n"
"}\n"
"\n"
"QTableView {\n"
"	border: 0px solid #ededed;\n"
"	selection-background-color: #ebebeb;\n"
"	selection-color: black;\n"
"}\n"
"\n"
"#transactionView {\n"
"	color: black;\n"
"}"));
        transactionView->setFrameShape(QFrame::NoFrame);
        transactionView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        transactionView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        transactionView->setSelectionMode(QAbstractItemView::SingleSelection);
        transactionView->setSelectionBehavior(QAbstractItemView::SelectRows);
        transactionView->setShowGrid(false);
        transactionView->verticalHeader()->setVisible(false);
        transactionView->verticalHeader()->setDefaultSectionSize(20);
        transactionView->verticalHeader()->setMinimumSectionSize(20);
        amountWidget = new QLineEdit(wTransactionsContainer);
        amountWidget->setObjectName(QString::fromUtf8("amountWidget"));
        amountWidget->setGeometry(QRect(516, 10, 76, 23));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(amountWidget->sizePolicy().hasHeightForWidth());
        amountWidget->setSizePolicy(sizePolicy2);
        addressWidget = new QLineEdit(wTransactionsContainer);
        addressWidget->setObjectName(QString::fromUtf8("addressWidget"));
        addressWidget->setGeometry(QRect(280, 10, 231, 23));
        sizePolicy2.setHeightForWidth(addressWidget->sizePolicy().hasHeightForWidth());
        addressWidget->setSizePolicy(sizePolicy2);
        dateWidget = new QComboBox(wTransactionsContainer);
        dateWidget->setObjectName(QString::fromUtf8("dateWidget"));
        dateWidget->setGeometry(QRect(32, 10, 120, 23));
        sizePolicy.setHeightForWidth(dateWidget->sizePolicy().hasHeightForWidth());
        dateWidget->setSizePolicy(sizePolicy);
        dateWidget->setMinimumSize(QSize(43, 22));
        dateWidget->setMaximumSize(QSize(120, 16777215));
        dateWidget->setStyleSheet(QString::fromUtf8(""));
        dateWidget->setIconSize(QSize(16, 20));
        bTransactionsSortOrder = new QPushButton(wTransactionsContainer);
        bTransactionsSortOrder->setObjectName(QString::fromUtf8("bTransactionsSortOrder"));
        bTransactionsSortOrder->setGeometry(QRect(-4, 11, 40, 20));
        bTransactionsSortOrder->setMinimumSize(QSize(20, 20));
        bTransactionsSortOrder->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;	\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/sort_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        bTransactionsSortOrder->setIcon(icon);
        bTransactionsSortOrder->setIconSize(QSize(20, 20));
        typeWidget = new QComboBox(wTransactionsContainer);
        typeWidget->setObjectName(QString::fromUtf8("typeWidget"));
        typeWidget->setGeometry(QRect(156, 10, 120, 23));
        typeWidget->setMinimumSize(QSize(43, 22));
        typeWidget->setMaximumSize(QSize(120, 16777215));

        verticalLayout_9->addWidget(wTransactionsContainer);


        retranslateUi(TransactionsPage);

        QMetaObject::connectSlotsByName(TransactionsPage);
    } // setupUi

    void retranslateUi(QWidget *TransactionsPage)
    {
        TransactionsPage->setWindowTitle(QApplication::translate("TransactionsPage", "Form", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("TransactionsPage", "Transactions", 0, QApplication::UnicodeUTF8));
        bTransactionsSortOrder->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TransactionsPage: public Ui_TransactionsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONSPAGE_H
