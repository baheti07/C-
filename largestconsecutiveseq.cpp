#include<bits/stdc++.h>
using namespace std;
int largestconsec(vector<int>&arr)
{
    int ans=0,count=0;
    sort(arr.begin(),arr.end());
    vector<int>v;
    v.push_back(arr[0]);
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]!=arr[i-1])
          v.push_back(arr[i]);
    }
    for(int i=0;i<v.size();i++)
    {
        if(i>0&&v[i]==v[i-1]+1)
          count++;
        else
          count=1;

        ans=max(ans,count);
    }
    return ans;
}
int main()
{
    vector<int>arr={102,4,100,1,101,3,2};
    cout<<"Largest consecutive sequence is:"<<largestconsec(arr)<<endl;
}