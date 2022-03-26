#include<bits/stdc++.h>
using namespace std;
void swap(int*x,int*y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void wavesort(vector<int>&arr)
{
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i+=2)
      swap(&arr[i],&arr[i+1]);
}
int main()
{
    vector<int>arr={10,90,49,2,1,5,23};
    wavesort(arr);
    for(int i=0;i<arr.size();i++)
      cout<<arr[i]<<" ";
    return 0;  
}