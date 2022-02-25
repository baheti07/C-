#include<iostream>
#include<vector>
using namespace std;
int findmaxconsecutive(vector<int>&nums)
{
    int cnt=0,maxi=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==1)
        {
            cnt++;
        }
        else
          cnt=0;

        maxi=max(maxi,cnt);  
    }
    return maxi;
}
int main ()
{
    vector<int>nums={1,1,0,0,1,1,1,1};
    cout<<findmaxconsecutive(nums);
}