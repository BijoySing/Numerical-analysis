#include<bits/stdc++.h>
using namespace std;
/**
f(x)= x^3-pow(x,2)+2
*/
#define f(x) pow(x,3) - pow(x,2) + 2

int main()
{

	  float x0, x1, x2, f0, f1, f2, e;
	 int step = 1;
	 string ss;
     cout<<"function is = x^3 - x^2 + 2"<<endl;
	 cout<<"\nEnter two initial guesses:\n";
	 cin>>x0>>x1;
	 cout<<"Enter tolerable error:\n";
	 cin>>e;
	 f0 = f(x0);
	 f1 = f(x1);
	 if( f0 * f1 > 0.0)
	 {
		  cout<<"Incorrect Initial Guesses.\n";
	 }
	 do
	 {
		  x2 = x0 - (x0-x1) * f0/(f0-f1);
		  f2 = f(x2);
		  cout<<" step : "<<step<<" x0 : "<<x0<<" x1 : "<<x1<<" x2 : "<<x2<<" f2 : "<<f2<<endl;

		  if(f0*f2 < 0)
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

	 }while(fabs(f2)>e);

	 cout<<"\nRoot is: "<<x2<<endl;
	 return 0;
}
