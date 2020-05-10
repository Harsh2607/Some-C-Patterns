#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   int n;
    cout<<"Enter the value of n (no. of lines): ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {   for(int k=1;k<=(n-i);k++)
            cout<<"  ";
        for(int j=1;j<=i;j++)
        {   if(i==1||j==1||j==i||i==n)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
