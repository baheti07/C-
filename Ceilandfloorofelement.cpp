#include<iostream>
#include<vector>
using namespace std;
int getceil(vector<int>&arr,int x)
{
    int low=0,high=arr.size()-1;
    int ceil=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
          return arr[mid];
        else if(x<arr[mid])
        {
            ceil=arr[mid];
            high=mid-1;
        }  
        else
          low=mid+1;
    }
    return ceil;
}
int getfloor(vector<int>&arr,int x)
{
    int low=0,high=arr.size()-1;
    int floor=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
          return arr[mid];
        else if(x>arr[mid])
        {
            floor=arr[mid];
            low=mid+1;
        }  
        else
          high=mid-1;
    }
    return floor;
}
int main()
{
    vector<int>arr;
    arr={1,2,3,4,8,10,12,19};
    int x=5;
    cout<<"Ceil of 5 in array is: "<<getceil(arr,x)<<endl;
    cout<<"Floor of 5 in array is: "<<getfloor(arr,x);

}