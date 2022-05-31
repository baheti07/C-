#include<bits/stdc++.h>
using namespace std;
int sumk(vector<int>&nums,int k)
{
    int i=0,j=0,sum=0;
    int mx=INT_MIN;
    while(j<nums.size())
    {
        sum+=nums[j];
        if(sum<k) j++;
        else if(sum==k)
        {
            mx=max(mx,j-i+1);
            j++;
        }
        else if(sum>k)
        {
            while(sum>k)
            {
                sum-=nums[i];
                i++;
            }
            j++;    
        }
    }
    return mx;
}
int main()
{
    vector<int>nums={4,1,1,1,2,3,5};
    int k=5;
    cout<<sumk(nums,k);
}