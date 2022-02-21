#include<iostream>
#include<vector>
using namespace std;
int ispossible(vector<int>&A,int pages,int students)
{
   int cnt=0;
   int sumallocated=0;
   for(int i=0;i<A.size();i++)
   {
       if(sumallocated+A[i]>pages)
       {
           cnt++;
           sumallocated=A[i];
           if(sumallocated>pages)
              return false;

       }
       else
          sumallocated+=A[i];
   }
   if(cnt<students)
     return true;

   return false;  
}
int findpages(vector<int>&A,int students)
{
    if(A.size()<students)
      return -1;
    int low=A[0];
    int high=0;
    for(int i=0;i<A.size();i++)
    {
        high+=A[i];
        low=min(low,A[i]);
    }  
    int res=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(ispossible(A,mid,students))
        {
            res=mid;
            high=mid-1;
        }
        else
          low=mid+1;
    }
    return res;
}
int main()
{
    vector<int>A;
    A={12,34,67,90};
    int students=2;
    cout<<"Minimum pages:"<<findpages(A,students)<<endl;
}