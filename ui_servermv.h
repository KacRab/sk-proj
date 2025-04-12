/********************************************************************************
** Form generated from reading UI file 'servermv.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERMV_H
#define UI_SERVERMV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerMV
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *portEdit;
    QPushButton *startBut;
    QGroupBox *commBox;
    QTextEdit *recEdit;
    QLabel *label_2;
    QPushButton *clrBut;
    QTextEdit *sendText;
    QPushButton *sendBut;
    QLabel *label_3;
    QSpinBox *cliNum;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ServerMV)
    {
        if (ServerMV->objectName().isEmpty())
            ServerMV->setObjectName("ServerMV");
        ServerMV->resize(378, 317);
        centralwidget = new QWidget(ServerMV);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 161, 51));
        QFont font;
        font.setPointSize(10);
        groupBox->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 22, 49, 16));
        QFont font1;
        font1.setPointSize(11);
        label->setFont(font1);
        portEdit = new QLineEdit(groupBox);
        portEdit->setObjectName("portEdit");
        portEdit->setGeometry(QRect(50, 20, 41, 22));
        portEdit->setAlignment(Qt::AlignCenter);
        startBut = new QPushButton(groupBox);
        startBut->setObjectName("startBut");
        startBut->setGeometry(QRect(100, 20, 51, 24));
        commBox = new QGroupBox(centralwidget);
        commBox->setObjectName("commBox");
        commBox->setEnabled(false);
        commBox->setGeometry(QRect(10, 60, 361, 211));
        commBox->setFont(font);
        recEdit = new QTextEdit(commBox);
        recEdit->setObjectName("recEdit");
        recEdit->setGeometry(QRect(70, 30, 281, 81));
        recEdit->setReadOnly(true);
        label_2 = new QLabel(commBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 30, 49, 16));
        clrBut = new QPushButton(commBox);
        clrBut->setObjectName("clrBut");
        clrBut->setGeometry(QRect(10, 90, 51, 21));
        sendText = new QTextEdit(commBox);
        sendText->setObjectName("sendText");
        sendText->setGeometry(QRect(70, 120, 281, 81));
        sendBut = new QPushButton(commBox);
        sendBut->setObjectName("sendBut");
        sendBut->setGeometry(QRect(10, 180, 51, 21));
        label_3 = new QLabel(commBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 120, 49, 16));
        cliNum = new QSpinBox(commBox);
        cliNum->setObjectName("cliNum");
        cliNum->setGeometry(QRect(10, 150, 51, 22));
        cliNum->setMaximum(0);
        ServerMV->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ServerMV);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 378, 22));
        ServerMV->setMenuBar(menubar);
        statusbar = new QStatusBar(ServerMV);
        statusbar->setObjectName("statusbar");
        ServerMV->setStatusBar(statusbar);

        retranslateUi(ServerMV);

        QMetaObject::connectSlotsByName(ServerMV);
    } // setupUi

    void retranslateUi(QMainWindow *ServerMV)
    {
        ServerMV->setWindowTitle(QCoreApplication::translate("ServerMV", "ServerMV", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ServerMV", "Connection", nullptr));
        label->setText(QCoreApplication::translate("ServerMV", "Port:", nullptr));
        portEdit->setText(QCoreApplication::translate("ServerMV", "12345", nullptr));
        startBut->setText(QCoreApplication::translate("ServerMV", "Start", nullptr));
        commBox->setTitle(QCoreApplication::translate("ServerMV", "Communication", nullptr));
        label_2->setText(QCoreApplication::translate("ServerMV", "Recived:", nullptr));
        clrBut->setText(QCoreApplication::translate("ServerMV", "Clear", nullptr));
        sendBut->setText(QCoreApplication::translate("ServerMV", "Send", nullptr));
        label_3->setText(QCoreApplication::translate("ServerMV", "Send:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerMV: public Ui_ServerMV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERMV_H
