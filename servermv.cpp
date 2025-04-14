#include "servermv.h"
#include "mytcpserver.h"
#include "ui_servermv.h"

ServerMV::ServerMV(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ServerMV)
{
    ui->setupUi(this);
}

ServerMV::~ServerMV()
{
    delete ui;
}

void ServerMV::resetServer()
{
    if (m_server != nullptr) {
        m_server->stopListening();
        delete m_server;
    }
    m_server = new MyTCPServer(this);
    connect(m_server,
            SIGNAL(newClientConnected(QString)),
            this,
            SLOT(slot_newClientConnected(QString)));
    connect(m_server, SIGNAL(clientDisconnetced(int)), this, SLOT(slot_clientDisconnected(int)));
    connect(m_server, SIGNAL(newMsgFrom(QString, int)), this, SLOT(slot_newMsgFrom(QString, int)));
}

bool ServerMV::validatePort(int port)
{
    if (port < 0 || 65535 < port) {
        ui->statusbar->showMessage("Błędny numer portu TCP!");
        return false;
    }
    return true;
}

void ServerMV::on_startBut_clicked()
{
    if (m_server != nullptr && m_server->isListening()) {
        m_server->stopListening();
        ui->startBut->setText("Start");
    } else {
        int port = ui->portEdit->text().toInt();
        if (!validatePort(port))
            return;
        resetServer();
        if (!m_server->startListening(port))
            ui->statusbar->showMessage("Błąd otwierania serwera!");
        else {
            ui->startBut->setText("Stop");
            ui->cliNum->setEnabled(false);
            ui->sendBut->setEnabled(false);
        }
    }
}

void ServerMV::updateCliNum()
{
    int numCli = m_server->getNumClients();
    ui->cliNum->setEnabled(numCli > 0);
    ui->sendBut->setEnabled(numCli > 0);
    ui->cliNum->setMaximum((numCli > 0) ? (numCli - 1) : 0);
}

void ServerMV::slot_newClientConnected(QString adr)
{
    ui->statusbar->showMessage("Nowy klient z: " + adr);
    updateCliNum();
}

void ServerMV::slot_clientDisconnected(int num)
{
    ui->statusbar->showMessage("Klient " + QString::number(num) + " rozłączony!");
    updateCliNum();
}

void ServerMV::slot_newMsgFrom(QString msg, int num)
{
    QString toWrite = "Klient" + QString::number(num) + ": " + msg;
    ui->recEdit->append(toWrite);
}

void ServerMV::on_clrBut_clicked()
{
    ui->recEdit->clear();
}

void ServerMV::on_sendBut_clicked()
{
    int num = ui->cliNum->value();
    QString msg = ui->sendText->toPlainText();
    m_server->sendMsg(msg, num);
    ui->sendText->clear();
}
