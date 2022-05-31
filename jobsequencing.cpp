#include<bits/stdc++.h>
using namespace std;
struct Job
{
   char id;     
   int dead;  
   int profit; 
};
bool comparison(Job a, Job b)
{
     return (a.profit > b.profit);
}
void printJobScheduling(Job arr[], int n)
{
    sort(arr, arr+n, comparison);
  
    int result[n];
    bool slot[n];
    for (int i=0; i<n; i++)
        slot[i] = false;
 
    for (int i=0; i<n; i++)
    {
       for (int j=min(n, arr[i].dead)-1; j>=0; j--)
       {
          if (slot[j]==false)
          {
             result[j] = i;  
             slot[j] = true;
             break;
          }
       }
    }
    for (int i=0; i<n; i++)
       if (slot[i])
         cout << arr[result[i]].id << " ";
}
int main()
{
    Job arr[]={{'a',4,20},{'b',5,60},{'c',6,70},{'d',6,65},{'e',4,25},{'f',2,80},{'g',2,10},{'h',2,22}};
    int n = 8; 
    cout << "maximum profit sequence of jobs is:"; 
    printJobScheduling(arr, n);
}