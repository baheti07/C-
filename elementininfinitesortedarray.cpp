#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int>&arr,int l,int r,int k)
{
   
   while(l<=r)
   {
       int mid=(l+r)/2;
       if(arr[mid]==k)
       {
           return mid;
       }
       else if (arr[mid]>k)
       {
           r=mid-1;
       }
       else
           l=mid+1;
   }
   return -1;
}
int search(vector<int>&arr,int k)
{
    int l=0,r=1;
    while(arr[r]<k)
    {
        l=r;
        r=2*r;
    }
    return bs(arr,l,r,k);
}
int main()
{
    vector<int>arr;
    arr={1,2,3,4,78,90,123,567};
    int k=78;
    cout<<search(arr,k);
}