#include <bits/stdc++.h>
 
using namespace std;

vector<int>twosum(vector<int>&nums,int t)
{
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]+nums[j]==t)
            {
                cout<<"Pair with given sum is"<<" "<<nums[i]<<" "<<"and"<<" "<<nums[j]<<endl;
            }
            
        }
    }
}
int main()
{
    vector<int>nums;
    nums={1,2,3,4};
    twosum(nums,5);
}