#include<bits/stdc++.h>
using namespace std;
int findklargest(vector<int>&arr,int k)
{
    priority_queue<int,vector<int>,greater<int>>minh;
 
    for(int i=0;i<arr.size();i++)
    {
       minh.push(arr[i]);
        if(minh.size()>k)minh.pop();
    }
    while(minh.size()!=0)
    {
        cout<<minh.top()<<" ";
        minh.pop();
    }
    
}   
int main()
{
    vector<int>arr={7,3,4,10,20,15};
    int k=3;
    findklargest(arr,k);
    return 0;
}