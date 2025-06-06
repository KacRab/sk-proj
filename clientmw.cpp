#include "clientmw.h"
#include "mytcpclient.h"
#include "qhostaddress.h"
#include "ui_clientmw.h"

ClientMW::ClientMW(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientMW)
{
    ui->setupUi(this);
}

ClientMW::~ClientMW()
{
    delete ui;
}

QString ClientMW::composeIPAddres()
{
    QString address = ui->adr0Edit->text() + "." + ui->adr1Edit->text() + "." + ui->adr2Edit->text()
                      + "." + ui->adr3Edit->text();
    return address;
}

bool ClientMW::validateConnectionData(QString adr, int port)
{
    QHostAddress ipAdr(adr);
    if (ipAdr.protocol() != QAbstractSocket::IPv4Protocol) {
        ui->statusbar->showMessage("Błędny adres IPv4!");
        return false;
    }
    if (port < 0 || 65535 < port) {
        ui->statusbar->showMessage("Błędny numer portu TCP!");
        return false;
    }
    return true;
}

void ClientMW::resetClient()
{
    if (m_client != nullptr) {
        m_client->disconnectFrom();
        delete m_client;
    }
    m_client = new MyTCPClient(this);
    connect(m_client, SIGNAL(connected(QString, int)), this, SLOT(slot_connected(QString, int)));
    connect(m_client, SIGNAL(disconnected()), this, SLOT(slot_disconnected()));
    connect(m_client, SIGNAL(messageRecived(QString)), this, SLOT(slot_messageRecived(QString)));
}

void ClientMW::on_connectBut_clicked()
{

    QString adr = composeIPAddres();
    int port = ui->portEdit->text().toInt();
    if (!validateConnectionData(adr, port))
        return;
    resetClient();
    m_client->connectTo(adr, port);
}

void ClientMW::on_chkBut_clicked()
{
    if (m_client->isConnected())
        ui->statusbar->showMessage("Połączono");
    else
        ui->statusbar->showMessage("Rozłączono");
}

void ClientMW::on_disconnectBut_clicked()
{
    m_client->disconnectFrom();
}

void ClientMW::on_sendBut_clicked()
{
    QString message = ui->sendText->toPlainText();
    ui->sendText->clear();
    m_client->sendMsg(message);
}

void ClientMW::on_clrBut_clicked()
{
    ui->reciveText->clear();
}

void ClientMW::slot_connected(QString adr, int port)
{
    ui->statusbar->showMessage("Połączono do " + adr + " " + QString::number(port));
    ui->disconnectBut->setEnabled(true);
}

void ClientMW::slot_disconnected()
{
    ui->statusbar->showMessage("Rozłączono");
    ui->disconnectBut->setEnabled(false);
}

void ClientMW::slot_messageRecived(QString msg)
{
    ui->reciveText->append(msg);
}
