#include "convertit.h"
#include <QApplication>

int main(int argc,char **argv)
{
    QApplication app1(argc,argv);
    ConvertIt convertIt;

    convertIt.show();
    app1.exec();
}
