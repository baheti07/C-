#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
double median(vector<int>&A,vector<int>&B)
{
    int n=A.size();
    int m=B.size();
    if(n>m)
      return median(B,A);
    int start=0;
    int end=n;
    
    while(start<=end)
    {
        int cut1=(start+end)/2;
        int cut2=(n+m+1)/2;
        int left1 = cut1 == 0 ? INT_MIN : A[cut1-1];
        int left2 = cut2 == 0 ? INT_MIN : B[cut2-1]; 
            
        int right1 = cut1 == n ? INT_MAX : A[cut1];
        int right2 = cut2 == m ? INT_MAX : B[cut2]; 
        if(left1 <= right2 && left2 <= right1)
        {
            if( (n + m) % 2 == 0 )
              return(max(left1, left2) + min(right1, right2)) / 2.0;
            else
              return max(left1, left2);  
        }
        else if(left1>right2)
          end=cut1-1;
        else
          start=cut1+1;  


    }  
    return 0.0;
}
int main()
{
    vector<int>A={1,2,3,4,5,6};
    vector<int>B={7,8,9,10};
    cout<<"Median of 2 sorted array:"<<median(A,B)<<endl;
}