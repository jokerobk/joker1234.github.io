#include "guanxi.h"
#include <cmath>
#include "circul.cpp"

void guanxi::setLength(point &p, circul &c)
{
    length = sqrt(pow((p.getPx() - c.getCenterPoint().getPx()), 2) + pow((p.getPy() - c.getCenterPoint().getPy()), 2));
}

void guanxi::isPandC(circul &c)
{
    if (length > c.gerCr())
    {
        cout << "点在圆外" << endl;
    }
    else if (length == c.gerCr())
    {
        cout << "点在圆上" << endl;
    }
    else
    {
        cout << "点在圆内" << endl;
    }
}

double guanxi::getlength()
{
    return length;
}