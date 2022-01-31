#include<iostream>
using namespace std;
int main()
{
    int n0=0,n1=1,n2=2,n3,num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<n0<<" "<<n1<<" "<<n2;
    for(int i=3;i<num;i++)
    {
     n3=n0+n1+n2;
     cout<<" "<<n3;
     n0=n1;
     n1=n2;
     n2=n3;
    } 
}