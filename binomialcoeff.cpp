#include<iostream>
using namespace std;
int binomialcoeff(int r,int k)
{
    int res=1;
    if(k>r-k)
      k=r-k;
    for(int i=0;i<k;i++)
    {
        res*=(r-i);
        res/=(i+1);
    }  
    return res;
}
int main()
{
    int r=4,k=2;
    cout<<binomialcoeff(r,k);
    return 0;
}