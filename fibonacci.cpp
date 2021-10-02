#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=1,n3,num,i;
    cout<<"Enter the number of terms: ";
    cin>>num;
    cout<<n1<<" "<<n2;
    for(i=2;i<num;i++)
    {
       n3=n1+n2;
       cout<<" "<<n3;
       n1=n2;
       n2=n3;
    }

}