#include "dialog.h"
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Dialog w;
    //w.show();
    Dialog *dialog = new Dialog;
    dialog->show();

    return a.exec();
}
