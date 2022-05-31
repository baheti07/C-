#include <bits/stdc++.h>
using namespace std;
int kthelement(vector<int>&arr1,vector<int>&arr2,int k)
{
    int n=arr1.size();
    int m=arr2.size();
    if(n>m)
      return kthelement(arr2,arr1,k);
    int low=max(0,k-m),high=min(k,n);
    while(low<=high)
    {
        int cut1=(low+high)/2;
        int cut2=k-cut1;
        int l1 = cut1 == 0 ? INT_MIN : arr1[cut1-1];
        int l2 = cut2 == 0 ? INT_MIN : arr2[cut2-1]; 
            
        int r1 = cut1 == n ? INT_MAX : arr1[cut1];
        int r2 = cut2 == m ? INT_MAX : arr2[cut2];
        if(l1<=r2&&l2<=r1)
          return max(l1,l2);
        else if(l1>r2)
          high=cut1-1;
        else
          low=cut1+1;    
    } 
    return 1; 
}
int main()
{
    int k=5;
    vector<int>arr1={1,3,4,7,10,12};
    vector<int>arr2={2,3,6,15};
    cout<<"Kth element:"<<kthelement(arr1,arr2,k)<<endl;
}