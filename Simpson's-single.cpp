#include<iostream>
#include<math.h>

/* Define function here */
//#define f(x) 1/(1+pow(x,2))
double f(double x)
{
    return 2000*(log(140000/(140000-2100*x)))-9.8*x;

}

using namespace std;
int main()
{
    float a, b, integration=0.0, stepSize, k;
    int i, subInterval;

    /* Input */
    cout<<"Enter a limit of integration: ";
    cin>>a;
    cout<<"Enter b limit of integration: ";
    cin>>b;

    /* Calculation */

    /* Finding step size */
    integration=(b-a)/6*(f(a)+4*f((a+b)/2)+f(b));
    // integration = integration * stepSize/3;

    cout<< endl<<"Required value of integration is: "<< integration;

    return 0;
}
