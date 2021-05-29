#pragma once
#include <iostream>
using namespace std;
class point
{
private:
    double px, py;

public:
    void setInfo(double px, double py);
    double getPx();
    double getPy();
};