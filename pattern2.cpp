#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   int n=0;
    cout<<"\nEnter value of n (no. of lines): ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {   for(int j=1;j<=((2*i)-2);j++)
            cout<<"  ";
        for(int k=1;k<=(n-i+1);k++)
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}
