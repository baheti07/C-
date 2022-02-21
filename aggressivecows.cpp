#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int ispossible(vector<int>&A,int cows,int mindist)
{
    int cntcows=1;
    int lastplacecows=A[0];
    for(int i=1;i<A.size();i++)
    {
        if(A[i]-lastplacecows>=mindist)
        {
            cntcows++;
            lastplacecows=A[i];

        }
    }
    if(cntcows>=cows)
      return true;

    return false;  
}
int ac(vector<int>&A,int cows)
{
    sort(A.begin(),A.end());
    int low=1,high=A[A.size()-1]-A[0];
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(ispossible(A,cows,mid))
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
            
    }
    return high;
}
int main()
{
    vector<int>A;
    A={4,2,1,8,9};
    int cows=3;
    cout<<"Largest minimum distance:"<<ac(A,cows);
}