#include <QApplication>
#include <authorization.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    authorization w;
    w.show();

    return a.exec();
}
