#include <QApplication>
#include <authorization.h>
#include <sqlconnection.h>

/*  to do:
 *  работа MySQL с юзверями и ролями
 *  ознакомиться с документацией Qt SQL
 *  подумать над реализацией архитектуры приложения
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    authorization w;
    w.show();
    SqlConnection sql("ngayduk","12345");

    return a.exec();
}
