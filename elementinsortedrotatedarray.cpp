#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>&arr,int target)
{
    int low=0,high=arr.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target)
          return mid;
        if(arr[low]<=arr[mid])
        {
            if(target>=arr[low]&&target<=arr[mid])
              high=mid-1;
            else
              low=mid+1;  
        }
        else
        {
            if(target>=arr[mid]&&target<=arr[high])
              low=mid+1;
            else
              high=mid-1;  
        }  
    }
    return -1;
}
int main()
{
    vector<int>arr;
    arr={11,12,15,18,2,5,6,8};
    int target=5;
    cout<<search(arr,target);
}