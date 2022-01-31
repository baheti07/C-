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
int lcm(int m,int n)
{
    return m*n/gcd(m,n);
}
int main()
{
    cout<<lcm(50,75);
}