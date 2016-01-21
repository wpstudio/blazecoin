/********************************************************************************
** Form generated from reading UI file 'miningpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MININGPAGE_H
#define UI_MININGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiningPage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *lineBefore;
    QWidget *wHeader;
    QLabel *label_37;
    QLabel *label_38;
    QWidget *wContainer;
    QTextEdit *miningLog;
    QLabel *label;
    QLabel *label_2;
    QLabel *lSpeed;
    QSlider *procSlider;
    QPushButton *bStopMining;
    QPushButton *bStartMining;

    void setupUi(QWidget *MiningPage)
    {
        if (MiningPage->objectName().isEmpty())
            MiningPage->setObjectName(QString::fromUtf8("MiningPage"));
        MiningPage->resize(792, 438);
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
        MiningPage->setPalette(palette);
        MiningPage->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MiningPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineBefore = new QFrame(MiningPage);
        lineBefore->setObjectName(QString::fromUtf8("lineBefore"));
        lineBefore->setStyleSheet(QString::fromUtf8("background-color: #0052AE;"));
        lineBefore->setFrameShadow(QFrame::Raised);
        lineBefore->setLineWidth(0);
        lineBefore->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(lineBefore);

        wHeader = new QWidget(MiningPage);
        wHeader->setObjectName(QString::fromUtf8("wHeader"));
        wHeader->setMinimumSize(QSize(0, 32));
        wHeader->setMaximumSize(QSize(16777215, 32));
        wHeader->setStyleSheet(QString::fromUtf8("#wHeader {\n"
"	background-color: black;\n"
"}"));
        wHeader->setProperty("is_header", QVariant(true));
        label_37 = new QLabel(wHeader);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(13, 1, 30, 30));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy);
        label_37->setMinimumSize(QSize(30, 30));
        label_37->setMaximumSize(QSize(30, 30));
        label_37->setPixmap(QPixmap(QString::fromUtf8(":/res/mining_title.png")));
        label_38 = new QLabel(wHeader);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(38, 6, 94, 18));
        QFont font;
        font.setPointSize(11);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_38->setFont(font);
        label_38->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #D8DFE9;\n"
"}"));

        verticalLayout->addWidget(wHeader);

        wContainer = new QWidget(MiningPage);
        wContainer->setObjectName(QString::fromUtf8("wContainer"));
        wContainer->setStyleSheet(QString::fromUtf8("#wContainer {\n"
"	background-color: #D8DFE9;\n"
"}"));
        miningLog = new QTextEdit(wContainer);
        miningLog->setObjectName(QString::fromUtf8("miningLog"));
        miningLog->setGeometry(QRect(14, 10, 768, 350));
        miningLog->setMinimumSize(QSize(0, 100));
        QPalette palette1;
        QBrush brush4(QColor(242, 241, 240, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush4);
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        miningLog->setPalette(palette1);
        miningLog->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
"     border: 0px solid grey;\n"
"     background: white;\n"
"     width: 9px;\n"
"     margin: 0px 0px 0 0px;\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"     background: #D8DFE9;\n"
"     min-width: 20px;\n"
" }"));
        miningLog->setReadOnly(true);
        miningLog->setProperty("tabKeyNavigation", QVariant(false));
        miningLog->setProperty("columnCount", QVariant(2));
        label = new QLabel(wContainer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(238, 373, 57, 15));
        label_2 = new QLabel(wContainer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(47, 372, 57, 15));
        lSpeed = new QLabel(wContainer);
        lSpeed->setObjectName(QString::fromUtf8("lSpeed"));
        lSpeed->setGeometry(QRect(101, 369, 110, 23));
        sizePolicy.setHeightForWidth(lSpeed->sizePolicy().hasHeightForWidth());
        lSpeed->setSizePolicy(sizePolicy);
        lSpeed->setMinimumSize(QSize(110, 0));
        QPalette palette2;
        QBrush brush6(QColor(0, 82, 174, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        lSpeed->setPalette(palette2);
        QFont font1;
        lSpeed->setFont(font1);
        lSpeed->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #0052AE;\n"
"	font-size: 14px;\n"
"}"));
        lSpeed->setText(QString::fromUtf8("0 KH/S"));
        lSpeed->setWordWrap(false);
        lSpeed->setTextInteractionFlags(Qt::TextSelectableByMouse);
        procSlider = new QSlider(wContainer);
        procSlider->setObjectName(QString::fromUtf8("procSlider"));
        procSlider->setEnabled(true);
        procSlider->setGeometry(QRect(297, 373, 150, 16));
        procSlider->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
"	border: 1px solid #ededed;\n"
"	background-color: white;\n"
"	min-height: 20px;\n"
"}\n"
"QSlider::groove:disabled {\n"
"	background-color: #e0e0e0;\n"
"}\n"
"\n"
"QSlider::handle {\n"
"	border: none;\n"
"	background-color: #758EB3;\n"
"    width: 18px;\n"
"}\n"
"QSlider::handle:hover {\n"
"	background-color: #0099CC;\n"
"}\n"
"QSlider::handle:pressed {\n"
"	background-color: #0099CC;\n"
"}\n"
""));
        procSlider->setMinimum(1);
        procSlider->setMaximum(1);
        procSlider->setOrientation(Qt::Horizontal);
        bStopMining = new QPushButton(wContainer);
        bStopMining->setObjectName(QString::fromUtf8("bStopMining"));
        bStopMining->setGeometry(QRect(452, 371, 160, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setStyleStrategy(QFont::PreferAntialias);
        bStopMining->setFont(font2);
        bStopMining->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        bStopMining->setDefault(false);
        bStopMining->setFlat(true);
        bStartMining = new QPushButton(wContainer);
        bStartMining->setObjectName(QString::fromUtf8("bStartMining"));
        bStartMining->setGeometry(QRect(621, 371, 160, 20));
        bStartMining->setFont(font2);
        bStartMining->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        bStartMining->setDefault(true);
        bStartMining->setFlat(true);

        verticalLayout->addWidget(wContainer);

#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(MiningPage);

        QMetaObject::connectSlotsByName(MiningPage);
    } // setupUi

    void retranslateUi(QWidget *MiningPage)
    {
        MiningPage->setWindowTitle(QApplication::translate("MiningPage", "Form", 0, QApplication::UnicodeUTF8));
        label_37->setText(QString());
        label_38->setText(QApplication::translate("MiningPage", "Mining coins", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MiningPage", "Threads:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MiningPage", "Speed:", 0, QApplication::UnicodeUTF8));
        bStopMining->setText(QApplication::translate("MiningPage", "Stop", 0, QApplication::UnicodeUTF8));
        bStartMining->setText(QApplication::translate("MiningPage", "Start", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MiningPage: public Ui_MiningPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MININGPAGE_H
