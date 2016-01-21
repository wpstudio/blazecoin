/********************************************************************************
** Form generated from reading UI file 'addressbookpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKPAGE_H
#define UI_ADDRESSBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBookPage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *line_6;
    QWidget *wAddressBookHeader;
    QLabel *label_25;
    QLabel *label_25_1;
    QLabel *label_27;
    QPushButton *bClose;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *newAddressButton;
    QPushButton *copyToClipboard;
    QPushButton *editButton;
    QPushButton *showQRCode;
    QPushButton *signMessage;
    QPushButton *verifyMessage;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer_19;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *AddressBookPage)
    {
        if (AddressBookPage->objectName().isEmpty())
            AddressBookPage->setObjectName(QString::fromUtf8("AddressBookPage"));
        AddressBookPage->resize(724, 343);
        QPalette palette;
        QBrush brush(QColor(216, 223, 233, 255));
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
        AddressBookPage->setPalette(palette);
        AddressBookPage->setStyleSheet(QString::fromUtf8("#AddressBookPage {\n"
"	background-color: #D8DFE9;\n"
" }"));
        verticalLayout = new QVBoxLayout(AddressBookPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        line_6 = new QFrame(AddressBookPage);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setStyleSheet(QString::fromUtf8("background-color: #0052AE;"));
        line_6->setFrameShadow(QFrame::Raised);
        line_6->setLineWidth(0);
        line_6->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_6);

        wAddressBookHeader = new QWidget(AddressBookPage);
        wAddressBookHeader->setObjectName(QString::fromUtf8("wAddressBookHeader"));
        wAddressBookHeader->setMinimumSize(QSize(0, 32));
        wAddressBookHeader->setMaximumSize(QSize(16777215, 32));
        wAddressBookHeader->setStyleSheet(QString::fromUtf8("#wAddressBookHeader {\n"
"	background-color: black;\n"
"}"));
        wAddressBookHeader->setProperty("is_header", QVariant(true));
        label_25 = new QLabel(wAddressBookHeader);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(11, 0, 37, 30));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy);
        label_25->setMinimumSize(QSize(30, 30));
        label_25->setMaximumSize(QSize(55, 55));
        label_25->setPixmap(QPixmap(QString::fromUtf8(":/res/address_book.png")));
        label_25_1 = new QLabel(wAddressBookHeader);
        label_25_1->setObjectName(QString::fromUtf8("label_25_1"));
        label_25_1->setGeometry(QRect(46, 0, 38, 30));
        sizePolicy.setHeightForWidth(label_25_1->sizePolicy().hasHeightForWidth());
        label_25_1->setSizePolicy(sizePolicy);
        label_25_1->setMinimumSize(QSize(30, 30));
        label_25_1->setMaximumSize(QSize(55, 55));
        label_25_1->setPixmap(QPixmap(QString::fromUtf8(":/res/download.png")));
        label_27 = new QLabel(wAddressBookHeader);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(81, 6, 103, 18));
        QFont font;
        font.setPointSize(11);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_27->setFont(font);
        label_27->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #fff;\n"
"}"));
        bClose = new QPushButton(wAddressBookHeader);
        bClose->setObjectName(QString::fromUtf8("bClose"));
        bClose->setGeometry(QRect(694, 1, 30, 30));
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

        verticalLayout->addWidget(wAddressBookHeader);

        tableView = new QTableView(AddressBookPage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
"     border: 0px solid grey;\n"
"     background: white;\n"
"     width: 9px;\n"
"     margin: 24px 0px 0 0px;\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"     background: #BB9396;\n"
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
"     color: #0052AE;\n"
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
"	border: 1px solid #ededed;\n"
"	selection-background-color: #ebebeb;\n"
"	selection-color:  rgb(0, 82, 174);\n"
"}"));
        tableView->setFrameShape(QFrame::NoFrame);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tableView->setTabKeyNavigation(false);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setShowGrid(false);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setDefaultSectionSize(20);
        tableView->verticalHeader()->setMinimumSectionSize(20);

        verticalLayout->addWidget(tableView);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_18);

        newAddressButton = new QPushButton(AddressBookPage);
        newAddressButton->setObjectName(QString::fromUtf8("newAddressButton"));
        newAddressButton->setMinimumSize(QSize(31, 31));
        newAddressButton->setMaximumSize(QSize(31, 31));
        newAddressButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/add_contact/normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	image: url(:/res/add_contact/pressed.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/add_contact/hover.png);\n"
"}\n"
"\n"
"QPushButton:!enabled {\n"
"	image: url(:/res/add_contact/disabled.png);\n"
"}"));
        newAddressButton->setFlat(true);

        horizontalLayout_14->addWidget(newAddressButton);

        copyToClipboard = new QPushButton(AddressBookPage);
        copyToClipboard->setObjectName(QString::fromUtf8("copyToClipboard"));
        copyToClipboard->setMinimumSize(QSize(31, 31));
        copyToClipboard->setMaximumSize(QSize(31, 31));
        copyToClipboard->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/duplicate_contact/normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	image: url(:/res/duplicate_contact/click.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/duplicate_contact/hover.png);\n"
"}\n"
"\n"
"QPushButton:!enabled {\n"
"	image: url(:/res/duplicate_contact/disabled.png);\n"
"}"));
        copyToClipboard->setFlat(true);

        horizontalLayout_14->addWidget(copyToClipboard);

        editButton = new QPushButton(AddressBookPage);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setMinimumSize(QSize(31, 31));
        editButton->setMaximumSize(QSize(31, 31));
        editButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/edit_contact/edit_contact_normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	image: url(:/res/edit_contact/edit_contact_pressed.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/edit_contact/edit_contact_hover.png);\n"
"}\n"
"\n"
"QPushButton:!enabled {\n"
"	image: url(:/res/edit_contact/edit_contact_disabled.png);\n"
"}"));
        editButton->setFlat(true);

        horizontalLayout_14->addWidget(editButton);

        showQRCode = new QPushButton(AddressBookPage);
        showQRCode->setObjectName(QString::fromUtf8("showQRCode"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/qrcode"), QSize(), QIcon::Normal, QIcon::Off);
        showQRCode->setIcon(icon);

        horizontalLayout_14->addWidget(showQRCode);

        signMessage = new QPushButton(AddressBookPage);
        signMessage->setObjectName(QString::fromUtf8("signMessage"));
        signMessage->setEnabled(true);
        signMessage->setMinimumSize(QSize(31, 31));
        signMessage->setMaximumSize(QSize(31, 31));
        signMessage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/sign/normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	image: url(:/res/sign/pressed.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/sign/hover.png);\n"
"}\n"
"\n"
"QPushButton:!enabled {\n"
"	image: url(:/res/sign/disabled.png);\n"
"}"));
        signMessage->setFlat(true);

        horizontalLayout_14->addWidget(signMessage);

        verifyMessage = new QPushButton(AddressBookPage);
        verifyMessage->setObjectName(QString::fromUtf8("verifyMessage"));
        verifyMessage->setEnabled(true);
        verifyMessage->setMinimumSize(QSize(31, 31));
        verifyMessage->setMaximumSize(QSize(31, 31));
        verifyMessage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/verify/verify_normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	image: url(:/res/verify/verify_pressed.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/verify/verify_hover.png);\n"
"}\n"
"\n"
"QPushButton:!enabled {\n"
"	image: url(:/res/verify/verify_disabled.png);\n"
"}"));
        verifyMessage->setFlat(true);

        horizontalLayout_14->addWidget(verifyMessage);

        deleteButton = new QPushButton(AddressBookPage);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(31, 31));
        deleteButton->setMaximumSize(QSize(31, 31));
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"	image: url(:/res/del_contact/delete_contact_normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed:flat {\n"
"	image: url(:/res/del_contact/delete_contact_pressed.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	image: url(:/res/del_contact/delete_contact_hover.png);\n"
"}\n"
"\n"
"QPushButton:!enabled {\n"
"	image: url(:/res/del_contact/delete_contact_disabled.png);\n"
"}"));
        deleteButton->setFlat(true);

        horizontalLayout_14->addWidget(deleteButton);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_19);

        buttonBox = new QDialogButtonBox(AddressBookPage);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
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
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout_14->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_14);


        retranslateUi(AddressBookPage);
        QObject::connect(bClose, SIGNAL(clicked()), AddressBookPage, SLOT(close()));

        QMetaObject::connectSlotsByName(AddressBookPage);
    } // setupUi

    void retranslateUi(QWidget *AddressBookPage)
    {
        AddressBookPage->setWindowTitle(QApplication::translate("AddressBookPage", "Address Book", 0, QApplication::UnicodeUTF8));
        label_25->setText(QString());
        label_25_1->setText(QString());
        label_27->setText(QApplication::translate("AddressBookPage", "Address Book", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tableView->setToolTip(QApplication::translate("AddressBookPage", "Double-click to edit address or label", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        newAddressButton->setText(QString());
        copyToClipboard->setText(QString());
        editButton->setText(QString());
        showQRCode->setText(QApplication::translate("AddressBookPage", "Show &QR Code", 0, QApplication::UnicodeUTF8));
        signMessage->setText(QString());
        verifyMessage->setText(QString());
        deleteButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddressBookPage: public Ui_AddressBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKPAGE_H
