#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1,rows;
    cout<<"Input no of rows: ";
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
          cout<<k++<<" ";
             cout<<endl;
    }
}