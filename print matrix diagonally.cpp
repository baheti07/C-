#include<iostream>
using namespace std;
#define n 4
int main()
{
    int A[n][n];
    cout<<"Enter elements of matrix: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int l=0;l<n;l++)
          cin>>A[i][l];
    }
    for(int k=0;k<n;k++)
    {
        int row=0,col=k;
        while(col>=0)
        {
            cout<<A[row][col]<<" ";
            row++;
            col--;
        }
    }
    for(int j=1;j<n;j++)
    {
        int col=n-1, row=j;
        while(row<n)
        {
            cout<<A[row][col]<<" ";
            row++;
            col--;
        }
    }
}