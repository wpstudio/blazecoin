/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *wStatus;
    QVBoxLayout *verticalLayout_4;
    QFrame *line;
    QWidget *wStateHeader;
    QLabel *label_5;
    QWidget *wState;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelImmature;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelUnconfirmed;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *labelBalance;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_8;
    QWidget *wLastTransactions;
    QVBoxLayout *verticalLayout_5;
    QFrame *line_2;
    QWidget *wLastTransactionsHeader;
    QLabel *label_19;
    QWidget *wLastTransactionsContainer;
    QTableView *tableLastTransactionView;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(792, 438);
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
        OverviewPage->setPalette(palette);
        verticalLayout = new QVBoxLayout(OverviewPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        wStatus = new QWidget(OverviewPage);
        wStatus->setObjectName(QString::fromUtf8("wStatus"));
        wStatus->setMinimumSize(QSize(0, 157));
        wStatus->setMaximumSize(QSize(16777215, 157));
        verticalLayout_4 = new QVBoxLayout(wStatus);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        line = new QFrame(wStatus);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8("background-color: #0052AE;"));
        line->setFrameShadow(QFrame::Raised);
        line->setLineWidth(0);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(line);

        wStateHeader = new QWidget(wStatus);
        wStateHeader->setObjectName(QString::fromUtf8("wStateHeader"));
        wStateHeader->setMinimumSize(QSize(0, 32));
        wStateHeader->setMaximumSize(QSize(16777215, 32));
        wStateHeader->setSizeIncrement(QSize(0, 0));
        wStateHeader->setStyleSheet(QString::fromUtf8("#wStateHeader {\n"
"	background-color: black;\n"
"}"));
        wStateHeader->setProperty("is_header", QVariant(true));
        label_5 = new QLabel(wStateHeader);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(13, 6, 112, 18));
        QFont font;
        font.setPointSize(11);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #fff;\n"
"}"));

        verticalLayout_4->addWidget(wStateHeader);

        wState = new QWidget(wStatus);
        wState->setObjectName(QString::fromUtf8("wState"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wState->sizePolicy().hasHeightForWidth());
        wState->setSizePolicy(sizePolicy);
        wState->setStyleSheet(QString::fromUtf8("#wState {\n"
"	background-color: #D8DFE9;\n"
"}"));
        gridLayout = new QGridLayout(wState);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelImmature = new QLabel(wState);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        QFont font1;
        font1.setPointSize(15);
        font1.setStyleStrategy(QFont::PreferAntialias);
        labelImmature->setFont(font1);
        labelImmature->setStyleSheet(QString::fromUtf8("color: #0052AE;"));
        labelImmature->setTextInteractionFlags(Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(labelImmature);

        label_3 = new QLabel(wState);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/res/logo_small.png")));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_3, 2, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelUnconfirmed = new QLabel(wState);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setStyleSheet(QString::fromUtf8("color: #0052AE;"));
        labelUnconfirmed->setTextInteractionFlags(Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelUnconfirmed);

        label_2 = new QLabel(wState);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/logo_small.png")));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelBalance = new QLabel(wState);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setFont(font1);
        labelBalance->setStyleSheet(QString::fromUtf8("color: #0052AE;"));
        labelBalance->setTextInteractionFlags(Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(labelBalance);

        label = new QLabel(wState);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/logo_small.png")));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_6 = new QLabel(wState);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	margin-right: 0px;\n"
"	margin-top: 0px;\n"
"	margin-bottom: 0px;\n"
"	color: #0052AE;\n"
"}"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6->setMargin(0);
        label_6->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_4->addWidget(label_6);


        gridLayout->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        label_7 = new QLabel(wState);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	margin-right: 0px;\n"
"	margin-top: 0px;\n"
"	margin-bottom: 0px;\n"
"	color: #0052AE;\n"
"}"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7->setMargin(0);
        label_7->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_9->addWidget(label_7);


        gridLayout->addLayout(horizontalLayout_9, 1, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        label_8 = new QLabel(wState);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	margin-right: 0px;\n"
"	margin-top: 0px;\n"
"	margin-bottom: 0px;\n"
"	color: #0052AE;\n"
"}"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8->setMargin(0);
        label_8->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_10->addWidget(label_8);


        gridLayout->addLayout(horizontalLayout_10, 2, 1, 1, 1);


        verticalLayout_4->addWidget(wState);


        verticalLayout->addWidget(wStatus);

        wLastTransactions = new QWidget(OverviewPage);
        wLastTransactions->setObjectName(QString::fromUtf8("wLastTransactions"));
        wLastTransactions->setMinimumSize(QSize(0, 257));
        verticalLayout_5 = new QVBoxLayout(wLastTransactions);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        line_2 = new QFrame(wLastTransactions);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setStyleSheet(QString::fromUtf8("background-color: #000000;"));
        line_2->setLineWidth(0);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        wLastTransactionsHeader = new QWidget(wLastTransactions);
        wLastTransactionsHeader->setObjectName(QString::fromUtf8("wLastTransactionsHeader"));
        wLastTransactionsHeader->setMinimumSize(QSize(0, 32));
        wLastTransactionsHeader->setMaximumSize(QSize(16777215, 32));
        wLastTransactionsHeader->setStyleSheet(QString::fromUtf8("#wLastTransactionsHeader {\n"
"	background-color: black;\n"
"color: white;\n"
"}"));
        wLastTransactionsHeader->setProperty("is_header", QVariant(true));
        label_19 = new QLabel(wLastTransactionsHeader);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(14, 7, 129, 18));
        label_19->setFont(font);
        label_19->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #fff;\n"
"}"));

        verticalLayout_5->addWidget(wLastTransactionsHeader);

        wLastTransactionsContainer = new QWidget(wLastTransactions);
        wLastTransactionsContainer->setObjectName(QString::fromUtf8("wLastTransactionsContainer"));
        QPalette palette1;
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush5(QColor(216, 223, 233, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush4);
        wLastTransactionsContainer->setPalette(palette1);
        QFont font2;
        font2.setPointSize(8);
        wLastTransactionsContainer->setFont(font2);
        wLastTransactionsContainer->setStyleSheet(QString::fromUtf8("#wLastTransactionsContainer {\n"
"	background-color: #D8DFE9;\n"
"	color: black;\n"
"}"));
        tableLastTransactionView = new QTableView(wLastTransactionsContainer);
        tableLastTransactionView->setObjectName(QString::fromUtf8("tableLastTransactionView"));
        tableLastTransactionView->setGeometry(QRect(0, 1, 792, 246));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableLastTransactionView->sizePolicy().hasHeightForWidth());
        tableLastTransactionView->setSizePolicy(sizePolicy1);
        tableLastTransactionView->setFont(font2);
        tableLastTransactionView->setLayoutDirection(Qt::LeftToRight);
        tableLastTransactionView->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
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
"color: black;\n"
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
"	selection-background-color: #ebebeb;\n"
"	selection-color:  black;\n"
"	color: black;\n"
"}"));
        tableLastTransactionView->setFrameShape(QFrame::NoFrame);
        tableLastTransactionView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableLastTransactionView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableLastTransactionView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableLastTransactionView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableLastTransactionView->setShowGrid(false);
        tableLastTransactionView->horizontalHeader()->setDefaultSectionSize(100);
        tableLastTransactionView->horizontalHeader()->setMinimumSectionSize(33);
        tableLastTransactionView->verticalHeader()->setVisible(false);
        tableLastTransactionView->verticalHeader()->setDefaultSectionSize(20);
        tableLastTransactionView->verticalHeader()->setMinimumSectionSize(20);

        verticalLayout_5->addWidget(wLastTransactionsContainer);


        verticalLayout->addWidget(wLastTransactions);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OverviewPage", "Account status", 0, QApplication::UnicodeUTF8));
        labelImmature->setText(QApplication::translate("OverviewPage", "0 WDC", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        labelUnconfirmed->setText(QApplication::translate("OverviewPage", "0 WDC", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        labelBalance->setText(QApplication::translate("OverviewPage", "0 WDC", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_6->setText(QApplication::translate("OverviewPage", "Balance:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("OverviewPage", "Unconfirmed:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("OverviewPage", "Immature:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("OverviewPage", "Last transactions", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
