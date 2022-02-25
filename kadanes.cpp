#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int kadanes(vector<int>&nums)
{
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        sum=max(nums[i],sum + nums[i]);
        maxi=max(sum,maxi);
    }
    return maxi;
}
int main()
{
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<kadanes(nums);
}