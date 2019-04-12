#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QtSql>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this); 
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString servernmae = "LOCALHOST\\SQLEXPRESS";
    QString dbname = "0408982209_hoteldb";

    QSqlDatabase db = QSqlDatabase::addDatabase("OOBC");

    db.setConnectOptions();
    QString dsn = QString("DRIVER={SQL Native Client};SERVER=%1;DATABASE=%2;UID=root;PWD=haukar120;").arg(servernmae,dbname);
    db.setDatabaseName(dsn);

    if(db.open()){
        qDebug() << "Opened!";
        db.close();
    }else{
        qDebug() << "Error = " << db.lastError().text();
    }
}
