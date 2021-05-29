//#include <iostream>
//#include "point.h"
//#include "circul.h"
#include "guanxi.h"
#include "guanxi.cpp"
using namespace std;
int main()
{
    point p;
    point pc;
    circul c;
    guanxi g;
    p.setInfo(10, 11);
    pc.setInfo(10, 0);
    c.setCr(10);
    c.setCenterPoint(pc);
    cout << c.getCenterPoint().getPx() << " " << c.getCenterPoint().getPy() << endl;
    cout << c.gerCr() << endl;
    g.setLength(p, c);
    g.isPandC(c);
    cout << g.getlength() << endl;
    return 0;
}