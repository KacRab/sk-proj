/********************************************************************************
** Form generated from reading UI file 'servermv.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERMV_H
#define UI_SERVERMV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTextEdit *sendText;
    QTextEdit *recEdit;
    QLabel *label_3;
    QPushButton *sendBut;
    QLabel *label_2;
    QPushButton *clrBut;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *portEdit;
    QPushButton *startBut;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpinBox *cliNum;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ServerMV)
    {
        if (ServerMV->objectName().isEmpty())
            ServerMV->setObjectName("ServerMV");
        ServerMV->resize(623, 493);
        centralwidget = new QWidget(ServerMV);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        sendText = new QTextEdit(centralwidget);
        sendText->setObjectName("sendText");

        gridLayout->addWidget(sendText, 0, 0, 1, 2);

        recEdit = new QTextEdit(centralwidget);
        recEdit->setObjectName("recEdit");
        recEdit->setReadOnly(true);

        gridLayout->addWidget(recEdit, 0, 2, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        sendBut = new QPushButton(centralwidget);
        sendBut->setObjectName("sendBut");

        gridLayout->addWidget(sendBut, 1, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        clrBut = new QPushButton(centralwidget);
        clrBut->setObjectName("clrBut");

        gridLayout->addWidget(clrBut, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        portEdit = new QLineEdit(centralwidget);
        portEdit->setObjectName("portEdit");
        portEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(portEdit);

        startBut = new QPushButton(centralwidget);
        startBut->setObjectName("startBut");

        horizontalLayout->addWidget(startBut);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        cliNum = new QSpinBox(centralwidget);
        cliNum->setObjectName("cliNum");
        cliNum->setMaximum(0);

        horizontalLayout_2->addWidget(cliNum);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        ServerMV->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ServerMV);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 623, 37));
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
        label_3->setText(QCoreApplication::translate("ServerMV", "Wys\305\202ana wiadomos\304\207", nullptr));
        sendBut->setText(QCoreApplication::translate("ServerMV", "wy\305\233lij", nullptr));
        label_2->setText(QCoreApplication::translate("ServerMV", "Otrzymana wiadomos\304\207", nullptr));
        clrBut->setText(QCoreApplication::translate("ServerMV", "Wyczy\305\233\304\207", nullptr));
        label->setText(QCoreApplication::translate("ServerMV", "port:", nullptr));
        portEdit->setText(QCoreApplication::translate("ServerMV", "12345", nullptr));
        startBut->setText(QCoreApplication::translate("ServerMV", "Start", nullptr));
        label_4->setText(QCoreApplication::translate("ServerMV", "NumerKlienta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerMV: public Ui_ServerMV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERMV_H
