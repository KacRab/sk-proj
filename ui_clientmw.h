/********************************************************************************
** Form generated from reading UI file 'clientmw.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTMW_H
#define UI_CLIENTMW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientMW
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *portEdit;
    QLineEdit *adr0Edit;
    QLineEdit *adr1Edit;
    QLineEdit *adr2Edit;
    QLineEdit *adr3Edit;
    QPushButton *connectBut;
    QPushButton *chkBut;
    QPushButton *disconnectBut;
    QGroupBox *textCommGrp;
    QLabel *label_3;
    QTextEdit *sendText;
    QLabel *label_4;
    QTextEdit *reciveText;
    QPushButton *sendBut;
    QPushButton *clrBut;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *ClientMW)
    {
        if (ClientMW->objectName().isEmpty())
            ClientMW->setObjectName("ClientMW");
        ClientMW->resize(428, 403);
        QFont font;
        font.setPointSize(10);
        ClientMW->setFont(font);
        centralwidget = new QWidget(ClientMW);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 331, 91));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 22, 49, 16));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 59, 49, 16));
        label_2->setFont(font1);
        portEdit = new QLineEdit(groupBox);
        portEdit->setObjectName("portEdit");
        portEdit->setGeometry(QRect(50, 57, 51, 22));
        QFont font2;
        font2.setPointSize(11);
        portEdit->setFont(font2);
        portEdit->setAlignment(Qt::AlignCenter);
        adr0Edit = new QLineEdit(groupBox);
        adr0Edit->setObjectName("adr0Edit");
        adr0Edit->setGeometry(QRect(50, 20, 41, 22));
        adr0Edit->setFont(font2);
        adr0Edit->setAlignment(Qt::AlignCenter);
        adr1Edit = new QLineEdit(groupBox);
        adr1Edit->setObjectName("adr1Edit");
        adr1Edit->setGeometry(QRect(100, 20, 41, 22));
        adr1Edit->setFont(font2);
        adr1Edit->setAlignment(Qt::AlignCenter);
        adr2Edit = new QLineEdit(groupBox);
        adr2Edit->setObjectName("adr2Edit");
        adr2Edit->setGeometry(QRect(150, 20, 41, 22));
        adr2Edit->setFont(font2);
        adr2Edit->setAlignment(Qt::AlignCenter);
        adr3Edit = new QLineEdit(groupBox);
        adr3Edit->setObjectName("adr3Edit");
        adr3Edit->setGeometry(QRect(200, 20, 41, 22));
        adr3Edit->setFont(font2);
        adr3Edit->setAlignment(Qt::AlignCenter);
        connectBut = new QPushButton(groupBox);
        connectBut->setObjectName("connectBut");
        connectBut->setGeometry(QRect(110, 50, 71, 31));
        chkBut = new QPushButton(groupBox);
        chkBut->setObjectName("chkBut");
        chkBut->setGeometry(QRect(190, 50, 51, 31));
        disconnectBut = new QPushButton(groupBox);
        disconnectBut->setObjectName("disconnectBut");
        disconnectBut->setEnabled(false);
        disconnectBut->setGeometry(QRect(250, 50, 71, 31));
        textCommGrp = new QGroupBox(centralwidget);
        textCommGrp->setObjectName("textCommGrp");
        textCommGrp->setEnabled(false);
        textCommGrp->setGeometry(QRect(10, 100, 411, 251));
        label_3 = new QLabel(textCommGrp);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 20, 49, 16));
        label_3->setFont(font1);
        sendText = new QTextEdit(textCommGrp);
        sendText->setObjectName("sendText");
        sendText->setGeometry(QRect(80, 20, 321, 101));
        label_4 = new QLabel(textCommGrp);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 130, 61, 16));
        label_4->setFont(font1);
        reciveText = new QTextEdit(textCommGrp);
        reciveText->setObjectName("reciveText");
        reciveText->setGeometry(QRect(80, 130, 321, 101));
        reciveText->setReadOnly(true);
        sendBut = new QPushButton(textCommGrp);
        sendBut->setObjectName("sendBut");
        sendBut->setGeometry(QRect(10, 50, 61, 61));
        clrBut = new QPushButton(textCommGrp);
        clrBut->setObjectName("clrBut");
        clrBut->setGeometry(QRect(10, 160, 61, 61));
        ClientMW->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ClientMW);
        statusbar->setObjectName("statusbar");
        ClientMW->setStatusBar(statusbar);
        menubar = new QMenuBar(ClientMW);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 428, 23));
        ClientMW->setMenuBar(menubar);

        retranslateUi(ClientMW);

        QMetaObject::connectSlotsByName(ClientMW);
    } // setupUi

    void retranslateUi(QMainWindow *ClientMW)
    {
        ClientMW->setWindowTitle(QCoreApplication::translate("ClientMW", "ClientMW", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ClientMW", "Connection", nullptr));
        label->setText(QCoreApplication::translate("ClientMW", "IP:", nullptr));
        label_2->setText(QCoreApplication::translate("ClientMW", "Port:", nullptr));
        portEdit->setText(QCoreApplication::translate("ClientMW", "12345", nullptr));
        adr0Edit->setText(QCoreApplication::translate("ClientMW", "127", nullptr));
        adr1Edit->setText(QCoreApplication::translate("ClientMW", "0", nullptr));
        adr2Edit->setText(QCoreApplication::translate("ClientMW", "0", nullptr));
        adr3Edit->setText(QCoreApplication::translate("ClientMW", "1", nullptr));
        connectBut->setText(QCoreApplication::translate("ClientMW", "Connect", nullptr));
        chkBut->setText(QCoreApplication::translate("ClientMW", "Check", nullptr));
        disconnectBut->setText(QCoreApplication::translate("ClientMW", "Disconnect", nullptr));
        textCommGrp->setTitle(QCoreApplication::translate("ClientMW", "Text Comm", nullptr));
        label_3->setText(QCoreApplication::translate("ClientMW", "Send:", nullptr));
        label_4->setText(QCoreApplication::translate("ClientMW", "Recive:", nullptr));
        sendBut->setText(QCoreApplication::translate("ClientMW", "Send", nullptr));
        clrBut->setText(QCoreApplication::translate("ClientMW", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientMW: public Ui_ClientMW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTMW_H
