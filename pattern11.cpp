#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   int n;
    cout<<"PASCAL TRIANGLE\n";
    cout<<"\nEnter value of n: ";
    cin>>n;
    int a[20][20],k;
    for(int i=0;i<n;i++)
    {   for(int j=0;j<(n-i);j++)
            cout<<" ";
        for(int j=0;j<=i;j++)
        {   if(j==0||j==i)
            {   k=1;
                cout<<k<<" ";
                a[i][j]=k;
            }
            else
            {   k=a[i-1][j-1]+a[i-1][j];
                a[i][j]=k;
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
