#include<iostream>
using namespace std;
int main()
{
    int i,j,n,r,ctr;
    cout<<"Input any number: "<<endl;
    cin>>n;
    for(i=0;i<10;i++)
    {
        cout<<"The frequency of"<<i<<"= ";
        ctr=0;
        for(j=n;j>0;j=j/10)
        {
            r=j%10;
            if(r==i)
            {
                ctr++;
            }
        }
        cout<<ctr<<endl;
    }    

    
}