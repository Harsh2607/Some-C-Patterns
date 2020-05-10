#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   int n=0,temp;
    cout<<"\nEnter the odd value of n (total no. of lines): ";
    cin>>n;
    temp=n;
    for(int i=1;i<=(n/2);i++)
    {   for(int j=1;j<=(temp-1)/2;j++)
            cout<<"* ";
        for(int k=1;k<=((2*i)-1);k++)
            cout<<"  ";
        for(int m=1;m<=((n/2)-i+1);m++)
            cout<<"* ";
        temp=temp-2;
        cout<<endl;
    }
    cout<<endl;
    temp=n-2;
    for(int i=1;i<=(n/2);i++)
    {   for(int j=1;j<=i;j++)
            cout<<"* ";
        for(int k=1;k<=temp;k++)
            cout<<"  ";
        for(int m=i;m>=1;m--)
            cout<<"* ";
        temp=temp-2;
        cout<<endl;
    }
    return 0;
}
