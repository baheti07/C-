#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>&nums)
{
    int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans^=nums[i];
            ans^=i+1;
        }
        return ans;
}
int main()
{
    vector<int>nums= {1,5,2,4,3};
    
    cout << "Missing number:" << search(nums);
}