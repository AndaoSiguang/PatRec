#include "PaterRec.h"
#include <QtWidgets/QApplication>
#include "PaterRec_Fun.h"

int main(int argc, char* argv[])
{

    QApplication a(argc, argv);
    PaterRec w;
    
    w.setWindowTitle(QStringLiteral("�򵥼���ͼ��ʶ��"));
    w.setFixedSize(720, 615);
    w.show();
    return a.exec();
}

