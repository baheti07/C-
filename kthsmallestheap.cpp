#include<bits/stdc++.h>
using namespace std;
int findkthsmallest(vector<int>&arr,int k)
{
    priority_queue<int>maxh;
    for(int i=0;i<arr.size();i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k) maxh.pop();
    }
    return maxh.top();
}
int main()
{
    vector<int>arr={7,3,4,10,20,15};
    int k=3;
    cout << "k'th smallest array element is " << findkthsmallest(arr, k);
    return 0;
}