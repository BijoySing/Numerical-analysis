#include<bits/stdc++.h>
using namespace std;
/**
f(x)= 3*x-cos(x)-1
*/
double f(double x)
{
    return (3*x-cos(x)-1);
}

int  main()
{
    double x0, x1, x2, f0, f1, f2, e;
    int step = 1;
    // cout<<"function is = x^3 - x^2 + 2"<<endl;
    string ss;
    cout<<"\nEnter two initial guesses:\n";
    cin>>x0>>x1;
    cout<<"Enter tolerable error:\n";
    cin>>e;
    f0 = f(x0);
    cout<<f0<<endl;

    f1 = f(x1);
    cout<<f1<<endl;

    if( f0 * f1 > 0.0)
    {
        cout<<"Incorrect Initial Guesses.\n";
        return 0;
    }
    do
    {
        x2 = (x0 + x1)/2;
        f2 = f(x2);

        cout<<"\nstep : "<<step<<"\t x0 : "<<x0<<"\t"<<"x1 : "<<x1<<"\t x2 : "<<x2<<"\t f(x2) : "<<"\t"<<f(x2)<<"\n";

        if( f0 * f2 < 0)
        {
            x1 = x2;
            f1 = f2;
        }
        else
        {
            x0 = x2;
            f0 = f2;
        }
        step = step + 1;
    }
    while(fabs(f2)>e);
    cout<<"\nRoot is: "<<x2<<endl;
}
