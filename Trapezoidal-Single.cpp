#include<iostream>
#include<math.h>

/* Define function here */
double f(double x){
return 2000*(log(140000/(140000-2100*x)))-9.8*x;

}
using namespace std;
int main()
{

 /* Input */
 double a,b;
  cout<<"Enter lower limit of integration: ";
 cin>>a;
 cout<<"Enter upper limit of integration: ";
 cin>>b;
 double integration=(b-a)*((f(a)+f(b))/2);


 cout<< endl<<"Required value of integration is: "<< integration;

 return 0;
}
