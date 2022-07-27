#include<iostream>
using namespace std;
class findroot

{
public:  double x0,x1,e;
         int N;

public:
findroot();
findroot(double);
double error();
double f(double x);
double g(double x);
void get();
void put();
void calroot();
};
