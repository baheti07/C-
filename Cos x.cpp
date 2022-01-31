#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double x;
    cout<<"Calculating the value of cos(x) for x:";
    cin>>x;
    double s=0,t=x;
    for(int k=1;k<=10;k++)
    {
        s=s+t;
        t=-t*x*x/(2*k*(2*k-1));
        cout<<"No of terms: "<<k<<"Value: "<<s<<"Error estitmate: "<<t<<endl;
    }
    cout<<endl<<"From library function: "<<cos(x)<<endl;
}    