#pragma once
//#include <iostream>
#include "circul.h"
using namespace std;
class guanxi
{
private:
    double length;

public:
    void setLength(point &p, circul &c);
    void isPandC(circul &c);
    double getlength();
};