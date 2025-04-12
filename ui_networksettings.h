/********************************************************************************
** Form generated from reading UI file 'networksettings.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKSETTINGS_H
#define UI_NETWORKSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NetworkSettings
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxMode;
    QVBoxLayout *verticalLayoutMode;
    QRadioButton *radioButtonController;
    QRadioButton *radioButtonPlant;
    QFormLayout *formLayout;
    QLabel *labelIP;
    QLineEdit *lineEditIP;
    QLabel *labelPort;
    QSpinBox *spinBoxPort;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NetworkSettings)
    {
        if (NetworkSettings->objectName().isEmpty())
            NetworkSettings->setObjectName("NetworkSettings");
        verticalLayout = new QVBoxLayout(NetworkSettings);
        verticalLayout->setObjectName("verticalLayout");
        groupBoxMode = new QGroupBox(NetworkSettings);
        groupBoxMode->setObjectName("groupBoxMode");
        verticalLayoutMode = new QVBoxLayout(groupBoxMode);
        verticalLayoutMode->setObjectName("verticalLayoutMode");
        radioButtonController = new QRadioButton(groupBoxMode);
        radioButtonController->setObjectName("radioButtonController");

        verticalLayoutMode->addWidget(radioButtonController);

        radioButtonPlant = new QRadioButton(groupBoxMode);
        radioButtonPlant->setObjectName("radioButtonPlant");

        verticalLayoutMode->addWidget(radioButtonPlant);


        verticalLayout->addWidget(groupBoxMode);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        labelIP = new QLabel(NetworkSettings);
        labelIP->setObjectName("labelIP");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, labelIP);

        lineEditIP = new QLineEdit(NetworkSettings);
        lineEditIP->setObjectName("lineEditIP");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEditIP);

        labelPort = new QLabel(NetworkSettings);
        labelPort->setObjectName("labelPort");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, labelPort);

        spinBoxPort = new QSpinBox(NetworkSettings);
        spinBoxPort->setObjectName("spinBoxPort");
        spinBoxPort->setMinimum(1024);
        spinBoxPort->setMaximum(65535);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, spinBoxPort);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(NetworkSettings);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Ok|QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NetworkSettings);
        // QObject::connect(buttonBox, &QDialogButtonBox::accepted, NetworkSettings, qOverload<>(&QDialog::on_buttonBox_accepted));
        // QObject::connect(buttonBox, &QDialogButtonBox::rejected, NetworkSettings, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NetworkSettings);
    } // setupUi

    void retranslateUi(QDialog *NetworkSettings)
    {
        NetworkSettings->setWindowTitle(QCoreApplication::translate("NetworkSettings", "Konfiguracja Sieci", nullptr));
        groupBoxMode->setTitle(QCoreApplication::translate("NetworkSettings", "Tryb pracy", nullptr));
        radioButtonController->setText(QCoreApplication::translate("NetworkSettings", "Regulator", nullptr));
        radioButtonPlant->setText(QCoreApplication::translate("NetworkSettings", "Obiekt (Model ARX)", nullptr));
        labelIP->setText(QCoreApplication::translate("NetworkSettings", "Adres IP:", nullptr));
        labelPort->setText(QCoreApplication::translate("NetworkSettings", "Port:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetworkSettings: public Ui_NetworkSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKSETTINGS_H
