#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"\nEnter the order of matrix: ";
    scanf("%d",&n);
    float A[n+2][n+2],c,x[n+2],sum=0.0,L[n+2][n+2],U[n+2][n+2];

    cout<<"\nEnter the elements of augmented matrix row-wise:\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<(n+1); j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] : ";
            cin>>A[i][j];
            cout<<endl;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i<j)
            {
                c=A[j][i]/A[i][i];
                for(k=1; k<=n+1; k++)
                {
                    A[j][k]=A[j][k]-c*A[i][k];
                }
            }
        }
    }
    x[n]=A[n][n+1]/A[n][n];
    for(i=n-1; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+A[i][j]*x[j];
        }
        x[i]=(A[i][n+1]-sum)/A[i][i];
    }
    cout<<"\nThe solution is: \n";
    for(i=1; i<=n; i++)
    {
        cout<<"\nx"<<i<<"="<<x[i]<<"\t";
    }
    cout<<endl;
    cout<<"--------------------------"<<endl;
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(i<=j)
            {
                U[i][j]=A[i][j];
                for(k=0; k<i-1; k++)
                    U[i][j]-=L[i][k]*U[k][j];
                if(i==j)
                    L[i][j]=1;
                else
                    L[i][j]=0;
            }
            else
            {
                L[i][j]=A[i][j];
                for(k=0; k<=j-1; k++)
                    L[i][j]-=L[i][k]*U[k][j];
                L[i][j]/=U[j][j];
                U[i][j]=0;
            }
        }
    }

    cout<<"Lower Matrix : --- "<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<L[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Upper Matrix : ---"<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<U[i][j]<<" ";
        }
        cout<<endl;
    }

   return(0);
}
