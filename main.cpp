#include <QApplication>
#include <authorization.h>
#include <sqlconnection.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    authorization w;
    w.show();
    SqlConnection sql("ngayduk","12345");

    return a.exec();
}
