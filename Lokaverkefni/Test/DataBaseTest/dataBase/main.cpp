#include <QCoreApplication>
#include <QtSql>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("newrootpassword");
    db.setDatabaseName("0408982209_hoteldb");

    if(db.open()){
        qDebug() << "Opended1";

        QSqlQueryModel* querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT * FROM Hotel");
        qDebug() << querymodel->record();
        db.close();
    }else {
        qDebug() << "Error = " << db.lastError().text();
    }

    return a.exec();
}
