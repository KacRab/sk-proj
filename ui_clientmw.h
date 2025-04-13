/********************************************************************************
** Form generated from reading UI file 'clientmw.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTMW_H
#define UI_CLIENTMW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientMW
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *adr0Edit;
    QLineEdit *adr1Edit;
    QLineEdit *adr2Edit;
    QLineEdit *adr3Edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *portEdit;
    QPushButton *connectBut;
    QPushButton *chkBut;
    QPushButton *disconnectBut;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QTextEdit *reciveText;
    QPushButton *clrBut;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTextEdit *sendText;
    QPushButton *sendBut;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *ClientMW)
    {
        if (ClientMW->objectName().isEmpty())
            ClientMW->setObjectName("ClientMW");
        ClientMW->resize(847, 599);
        QFont font;
        font.setPointSize(10);
        ClientMW->setFont(font);
        centralwidget = new QWidget(ClientMW);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        adr0Edit = new QLineEdit(centralwidget);
        adr0Edit->setObjectName("adr0Edit");
        QFont font2;
        font2.setPointSize(11);
        adr0Edit->setFont(font2);
        adr0Edit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(adr0Edit);

        adr1Edit = new QLineEdit(centralwidget);
        adr1Edit->setObjectName("adr1Edit");
        adr1Edit->setFont(font2);
        adr1Edit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(adr1Edit);

        adr2Edit = new QLineEdit(centralwidget);
        adr2Edit->setObjectName("adr2Edit");
        adr2Edit->setFont(font2);
        adr2Edit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(adr2Edit);

        adr3Edit = new QLineEdit(centralwidget);
        adr3Edit->setObjectName("adr3Edit");
        adr3Edit->setFont(font2);
        adr3Edit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(adr3Edit);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        portEdit = new QLineEdit(centralwidget);
        portEdit->setObjectName("portEdit");
        portEdit->setFont(font2);
        portEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(portEdit);

        connectBut = new QPushButton(centralwidget);
        connectBut->setObjectName("connectBut");

        horizontalLayout_2->addWidget(connectBut);

        chkBut = new QPushButton(centralwidget);
        chkBut->setObjectName("chkBut");

        horizontalLayout_2->addWidget(chkBut);

        disconnectBut = new QPushButton(centralwidget);
        disconnectBut->setObjectName("disconnectBut");
        disconnectBut->setEnabled(false);

        horizontalLayout_2->addWidget(disconnectBut);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        reciveText = new QTextEdit(centralwidget);
        reciveText->setObjectName("reciveText");
        reciveText->setReadOnly(true);

        verticalLayout->addWidget(reciveText);

        clrBut = new QPushButton(centralwidget);
        clrBut->setObjectName("clrBut");

        verticalLayout->addWidget(clrBut);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        sendText = new QTextEdit(centralwidget);
        sendText->setObjectName("sendText");

        verticalLayout_2->addWidget(sendText);

        sendBut = new QPushButton(centralwidget);
        sendBut->setObjectName("sendBut");

        verticalLayout_2->addWidget(sendBut);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        ClientMW->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ClientMW);
        statusbar->setObjectName("statusbar");
        ClientMW->setStatusBar(statusbar);
        menubar = new QMenuBar(ClientMW);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 847, 37));
        ClientMW->setMenuBar(menubar);

        retranslateUi(ClientMW);

        QMetaObject::connectSlotsByName(ClientMW);
    } // setupUi

    void retranslateUi(QMainWindow *ClientMW)
    {
        ClientMW->setWindowTitle(QCoreApplication::translate("ClientMW", "ClientMW", nullptr));
        label->setText(QCoreApplication::translate("ClientMW", "IP:", nullptr));
        adr0Edit->setText(QCoreApplication::translate("ClientMW", "127", nullptr));
        adr1Edit->setText(QCoreApplication::translate("ClientMW", "0", nullptr));
        adr2Edit->setText(QCoreApplication::translate("ClientMW", "0", nullptr));
        adr3Edit->setText(QCoreApplication::translate("ClientMW", "1", nullptr));
        label_2->setText(QCoreApplication::translate("ClientMW", "Port:", nullptr));
        portEdit->setText(QCoreApplication::translate("ClientMW", "12345", nullptr));
        connectBut->setText(QCoreApplication::translate("ClientMW", "Po\305\202\304\205cz", nullptr));
        chkBut->setText(QCoreApplication::translate("ClientMW", "Sprawd\305\272", nullptr));
        disconnectBut->setText(QCoreApplication::translate("ClientMW", "Roz\305\202\304\205cz", nullptr));
        label_4->setText(QCoreApplication::translate("ClientMW", "Otrzymany", nullptr));
        clrBut->setText(QCoreApplication::translate("ClientMW", "Wyczy\305\233\304\207", nullptr));
        label_3->setText(QCoreApplication::translate("ClientMW", "Wys\305\202any:", nullptr));
        sendBut->setText(QCoreApplication::translate("ClientMW", "Wy\305\233lij", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientMW: public Ui_ClientMW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTMW_H
