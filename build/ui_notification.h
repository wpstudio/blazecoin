/********************************************************************************
** Form generated from reading UI file 'notification.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATION_H
#define UI_NOTIFICATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notification
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *wNotif;
    QHBoxLayout *horizontalLayout;
    QLabel *iconInfo;
    QLabel *lbText;
    QVBoxLayout *verticalLayout;
    QPushButton *bClose;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Notification)
    {
        if (Notification->objectName().isEmpty())
            Notification->setObjectName(QString::fromUtf8("Notification"));
        Notification->resize(530, 60);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Notification->sizePolicy().hasHeightForWidth());
        Notification->setSizePolicy(sizePolicy);
        Notification->setMinimumSize(QSize(0, 60));
        Notification->setMaximumSize(QSize(16777215, 60));
        Notification->setStyleSheet(QString::fromUtf8("#wNotif {\n"
"	background-color: #f4f4f4;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Notification);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        wNotif = new QWidget(Notification);
        wNotif->setObjectName(QString::fromUtf8("wNotif"));
        horizontalLayout = new QHBoxLayout(wNotif);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(15, 0, 0, 0);
        iconInfo = new QLabel(wNotif);
        iconInfo->setObjectName(QString::fromUtf8("iconInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(iconInfo->sizePolicy().hasHeightForWidth());
        iconInfo->setSizePolicy(sizePolicy1);
        iconInfo->setMinimumSize(QSize(26, 26));
        iconInfo->setMaximumSize(QSize(26, 26));
        iconInfo->setPixmap(QPixmap(QString::fromUtf8(":/res/information.png")));

        horizontalLayout->addWidget(iconInfo);

        lbText = new QLabel(wNotif);
        lbText->setObjectName(QString::fromUtf8("lbText"));
        QFont font;
        font.setPointSize(10);
        lbText->setFont(font);
        lbText->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #000;\n"
"	background-color: #f4f4f4;\n"
"}"));
        lbText->setWordWrap(true);
        lbText->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(lbText);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        bClose = new QPushButton(wNotif);
        bClose->setObjectName(QString::fromUtf8("bClose"));
        bClose->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 0px solid gray;\n"
"}"));
        bClose->setText(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/close_information.png"), QSize(), QIcon::Normal, QIcon::Off);
        bClose->setIcon(icon);
        bClose->setIconSize(QSize(20, 20));
        bClose->setFlat(true);

        verticalLayout->addWidget(bClose);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addWidget(wNotif);


        retranslateUi(Notification);
        QObject::connect(bClose, SIGNAL(clicked()), Notification, SLOT(removeNotificationRequested()));

        QMetaObject::connectSlotsByName(Notification);
    } // setupUi

    void retranslateUi(QWidget *Notification)
    {
        Notification->setWindowTitle(QString());
        iconInfo->setText(QString());
        lbText->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Notification: public Ui_Notification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATION_H
