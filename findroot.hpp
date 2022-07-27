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
double f(double );
double g(double );
void get();
void put();
void newton();
void fix();
};
