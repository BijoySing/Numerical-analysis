
#include<bits/stdc++.h>
using namespace std;
float f(float x)
{
    return x*x*x-0.165*x*x+3.994*pow(10,-4);
}
int main()
{
    float a,b,c,d,e;
    int count=1,n;
    cout<<"\n\nEnter the values of a and b:\n";
    cin>>a>>b;
    cout<<"Enter the values of allowed error and maximun number of iterations:\n";
    cin>>e>>n;
    do
    {
        if(f(a)==f(b))
        {
            cout<<"\nSolution cannot be found as the values of a and b are same.\n";
        return 0;
        }
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        a=b;
        b=c;
        cout<<"Iteration No- "<<count <<"    x= "<<c<<endl;
        count++;
        if(count==n)
        {
        break;
        }
    } while(fabs(f(c))>e);
    cout<<"\n The required solution is "<<c<<endl;

}
