#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int largestrectanglearea(vector<int>&heights)
{
    int n=heights.size();
    stack<int>st;
    int leftsmall[n],rightsmall[n];
    for(int i=0;i<n;i++)
    {
        while(!st.empty()&&heights[st.top()] >= heights[i])
           st.pop();
        if(st.empty())
           leftsmall[i]=0;
        else
           leftsmall[i]=st.top()+1;

        st.push(i);         
    }
    while(!st.empty())
      st.pop();
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty()&&heights[st.top()] >= heights[i])
           st.pop();
        if(st.empty())
           rightsmall[i]=n-1;
        else
           rightsmall[i]=st.top()-1;

        st.push(i);         
    }  
    int maxA=0;
    for(int i=0;i<n;i++)
       maxA=max(maxA,heights[i]*(rightsmall[i]-leftsmall[i]+1));

    return maxA;  
}
int main()
{
    vector<int>heights;
    heights={2,1,5,6,2,3};
    cout<<largestrectanglearea(heights);
    return 0;
}