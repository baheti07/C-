#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<int,pair<int,int>>>maxh;
void kclosestorigin(vector<vector<int>> pts,int k)
{
    for(int i=0;i<pts.size();i++)
    {
        maxh.push({pts[i][0]*pts[i][0]+pts[i][1]*pts[i][1],{pts[i][0],pts[i][1]}});
        if(maxh.size()>k) maxh.pop();
    }
    while(maxh.size()>0)
    {
        pair<int,int>p=maxh.top().second;
        cout<<p.first<< ","<<p.second<<"   ";
        maxh.pop();
    }
}
int main()
{
    vector<vector<int>> points={ {1,3} , {-2,2} , {5,8} , {0,1} };
    int k=2; 
    kclosestorigin(points,k);
}