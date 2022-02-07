//
// Created by AliKazzazi on 2/7/2022.
//

#include <QApplication>
#include <QLabel>

#include "MyMath.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    int num1 = 5;
    int num2 = 10;

    MyMath mathObj;

    QLabel lbl;
    lbl.setText(QString::number(mathObj.add(num1, num2)));
    lbl.show();

    return app.exec();
}
