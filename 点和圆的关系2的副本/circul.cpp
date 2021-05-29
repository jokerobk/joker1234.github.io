//#include "point.h"
#include "circul.h"
#include "point.cpp"

void circul::setCr(double cr)
{
    this->cr = cr;
}

void circul::setCenterPoint(point centerPoint)
{
    this->centerPoint = centerPoint;
}

double circul::gerCr()
{
    return cr;
}

point circul::getCenterPoint()
{
    return centerPoint;
}