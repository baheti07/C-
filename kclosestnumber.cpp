#include<bits/stdc++.h>
using namespace std;
void printkclosest(vector<int>&arr,int k,int x)
{
    priority_queue<pair<int,int>>maxh;
    for(int i=0;i<arr.size();i++)
    {
        maxh.push({abs(arr[i]-x),arr[i]});
        if(maxh.size()>k) maxh.pop();
    }
    while(maxh.size()>0)
    {
        cout<<maxh.top().second<<" ";
        maxh.pop();
    }
}
int main()
{
    vector<int>arr={-10, -50, 20, 17, 80};
    int x = 20, k = 2;
    printkclosest(arr, k, x);
    return 0;
}