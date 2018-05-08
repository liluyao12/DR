#include "droc.h"
#include <QApplication>
#include "table.h"
#include "exam.h"
#include <QApplication>
#include <QObject>




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Table w;
    //Exam w;
    w.showFullScreen();
    //w.show();

    return a.exec();
}
