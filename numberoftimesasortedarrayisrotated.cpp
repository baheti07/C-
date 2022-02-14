#include<iostream>
#include<vector>
using namespace std;
int countrotation(vector<int>&arr)
{
    int low=0,high=arr.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        int prev=(mid-1+arr.size())%arr.size(), next=(mid+1)%arr.size();
        if(arr[mid]<=arr[prev]&&arr[mid]<=arr[next])
           return mid;
        else if(arr[mid]<=arr[high])
           high=mid-1;
        else if(arr[mid]>=arr[low])
           low=mid+1;      
    }
    return 0;
}
int main()
{
    vector<int>arr;
    arr={11,12,15,18,2,5,6,8};
    cout <<countrotation(arr);
 
    return 0;
} 