#pragma once
//#include <iostream>
#include "point.h"
using namespace std;

class circul
{
private:
    double cr;
    point centerPoint;

public:
    void setCr(double cr);
    void setCenterPoint(point p);
    double gerCr();
    point getCenterPoint();
};