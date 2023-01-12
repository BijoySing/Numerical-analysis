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
    float lower, upper, integration=0.0, stepSize, k;
    int i, subInterval;

    /* Input */
    cout<<"Enter lower limit of integration: ";
    cin>>lower;
    cout<<"Enter upper limit of integration: ";
    cin>>upper;
    cout<<"Enter number of sub intervals: ";
    cin>>subInterval;

    /* Calculation */

    /* Finding step size */
    stepSize = (upper - lower)/subInterval;

    /* Finding Integration Value */
    integration = f(lower) + f(upper);

    for(i=1; i<= subInterval-1; i++)
    {
        if(i%2)
        {
            k = lower + i*stepSize;
            integration = integration + 4 * (f(k));
        }
        else
        {
            k = lower + i*stepSize;
            integration = integration + 2 * (f(k));
        }

    }

    integration = integration * stepSize/3;

    cout<< endl<<"Required value of integration is: "<< integration;

    return 0;
}
