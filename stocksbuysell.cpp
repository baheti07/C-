#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int maxprofit(vector<int>&prices)
{
    int maxpro=0;
    int minprice=INT_MAX;
    for(int i=0;i<prices.size();i++)
    {
        minprice=min(minprice,prices[i]);
        maxpro=max(maxpro,prices[i]-minprice);
    }
    return maxpro;
}
int main()
{
    vector<int>prices={7,1,5,3,6,4};
    cout<<maxprofit(prices)<<endl;
}