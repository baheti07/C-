#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double marks[10];
    for(int i=0;i<10;i++)
     cin>>marks[i];
    
    double maxsofar=marks[0];
    for(int i=0;i<10;i++)
      maxsofar=max(maxsofar,marks[i]);

    for(int i=0;i<10;i++)
      if(marks[i]==maxsofar)
        cout<<i<<endl;  
}