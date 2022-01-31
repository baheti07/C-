#include<iostream>
using namespace std;
int main()
{
    int m,n;
    int a1[20],a2[20],u[40];
    cout<<"Enter the number of elements in array 1: ";
    cin>>n;
    for(int i=0;i<n;i++)
      cin>>a1[i];
    cout<<"Enter the number of elements in array 2: ";
    cin>>m;
    for(int j=0;j<m;j++)  
      cin>>a2[j];
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a1[i]<a2[j])
        {
          u[k]=a1[i];
          i++;
          k++;
        }
        else if(a2[j]<a1[i])
        {
          u[k]=a2[j];
          j++;
          k++;
        }
        else
        {
            u[k]=a1[i];
            i++;
            j++;
            k++;
        }
          
    }
    while (i < n)
    {
        for(i=0;i<n;i++)
        {
          u[k]=a1[i];
          k++;
        }  
    }    
 
    while (j < m)
    {
        for(j=0;j<m;j++)
        {
          u[k]=a2[j];
          k++;
        }
    }
    cout<<"Union of two arrays: "<<endl;
    for(i=0;i<k;++i)
      cout<<u[i]<<" ";
}
