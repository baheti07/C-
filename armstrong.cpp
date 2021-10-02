#include<iostream>
using namespace std;
int main()
{
    int n,r,temp,s=0;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(temp==s)
      cout<<"Armstrong no";
    else
      cout<<"Not an armstrong no";  
}