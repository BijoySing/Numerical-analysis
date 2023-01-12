#include<bits/stdc++.h>
using namespace std;
double linear_interpolation(double x1,double fx1,double x2,double fx2,double x)
{
    if(x1<=x<=x2)
    {
        return fx1+(fx2-fx1)*(x-x1)/(x2-x1);
    }
    else
        printf("No answer");
}
int main()
{
    double x1,fx1,x2,fx2,x;

    cin>>x1>>fx1>>x2>>fx2>>x;

cout<<linear_interpolation( x1, fx1, x2, fx2, x);

}



