#include<iostream>
#include<vector>
using namespace std;
void Sortcolor(vector<int>&nums)
{
    int lo=0,mid=0;
    int hi=nums.size()-1;
    while(mid<=hi)
    {
        switch(nums[mid])
        {
            case 0:
                swap(nums[lo++],nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid],nums[hi--]);
                break;        
        }
    }
}
void printArray(vector<int>&nums)
{
    // Iterate and print every element
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
}
int main()
{
    vector<int>nums;
    nums={0,1,1,2,2,0,1,1,0,2};
    Sortcolor(nums);
    cout << "array after segregation ";
 
    printArray(nums);
}