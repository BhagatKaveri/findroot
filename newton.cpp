#include<iostream>
#include<cmath>
#include "newton.hpp"
#include<iomanip>
findroot::findroot()
{
    x0=0;
}
findroot::findroot(double x)
{
    x0=x;
}
double findroot :: f(double x)    //define the function here, ie give the equation
{
    double a=pow(x,3)-x-1.0;    //write the equation whose roots are to be determined
    return a;
}
double findroot :: g(double x)    //define the function here, ie give the equation
{
    double a=3*pow(x,2)-1.0;    //write the equation whose roots are to be determined
    return a;
}
//double findroot ::error()
//{
 //   return 0.0001;
//}
void findroot  :: get()
{
    
    cout<<"Enter the initial guesses:\nx0=";    //Enter the value of a for later use with goto)
    cin>>x0;
    cout<<"\n number of iteratation =";            //Enter the value of no of iteration
    cin>>N;
   cout<<"\n tolerable of error =";            //Enter the tolerable error
    cin>>e;
}

void findroot :: put()
{
    cout<< endl<<"Root is "<< x1;
}
void findroot :: calroot()
{ 
    float  f0, f1, g0;
    int step=1;
    get();
   do
	 {
	     
		  g0 = g(x0);
		  f0 = f(x0);
		  if(g0 == 0.0)
		  {
			   cout<<"Mathematical Error.";
			   exit(0);
		  }


		  x1 = x0 - f0/g0;


		  cout<<"Iteration-"<< step<<":\t x = "<< setw(10)<< x1<<" and f(x) = "<< setw(10)<< f(x1)<< endl;
		  x0 = x1;

		  step = step+1;

		  if(step > N)
		  {
			   cout<<"Not Convergent.";
			   exit(0);
		  }

		  f1 = f(x1);

	 }while(fabs(f1)>e);

	 cout<< endl<<"Root is: "<< x1;
	// return 0;
}
