#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the first number:"<<endl;
    cout<<"Enter the second number:"<<endl;
    cin>>n>>m;
    while(m%n!=0)
    {
        int nextm=n;
        int nextn=m%n;
        m=nextm;
        n=nextn;
    } 
    cout<<n<<endl;
}    