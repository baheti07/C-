#include<iostream>
#include<vector>
using namespace std;
int removeduplicates(vector<int>&nums)
{
    if(nums.size()==0)
      return 0;
    int i=0;
    for(int j=1;j<nums.size();j++)
    {
        if(nums[j]!=nums[i])
        {
            i++;
            nums[i]=nums[j];
        }
    }  
    return i+1;
}
int main()
{
    vector<int>nums={1,1,3,3,6,6,7,7,7,7};
    cout<<removeduplicates(nums);
}