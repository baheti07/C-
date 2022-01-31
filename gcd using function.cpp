#include<iostream>
using namespace std;
int gcd(int m,int n)
{
    while(m%n!=0)
    {
        int nextm=n;
        int nextn=m%n;
        m=nextm;
        n=nextn;
    }
    return n;
}
int main()
{
    cout<<gcd(36,24)<<endl;
    cout<<gcd(99,47)<<endl;
}
