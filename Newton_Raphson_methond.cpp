#include<bits/stdc++.h>
using namespace std;
float f(float x)
{
    return x*x*x-0.165*x*x+3.994*pow(10,-4);
}
float df (float x)
{
return 3*x*x-0.165*x*2;
}
int main()
{
    int itr, maxmitr;
    float h, x0, x1, allerr;
    cout<<"\nEnter x0, allowed error and maximum iterations\n";
    cin>>x0>>allerr>>maxmitr;
    for (itr=1; itr<=maxmitr; itr++)
    {
        cout<<f(x0)<<endl<<df(x0)<<endl;
        h=f(x0)/df(x0);
        x1=x0-h;
        cout<<" At Iteration no. : "<<itr<< "  "<<x1<<endl;;
        if (fabs(h) < allerr)
        {
            cout<<"After "<<itr<<" iterations, root = "<<x1<<endl;
            return 0;
        }
        x0=x1;
    }
    cout<<"The required solution does not converge or iterations are insufficient\n";
    return 1;
}
