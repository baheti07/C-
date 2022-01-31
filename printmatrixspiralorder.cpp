#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;
    int A[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
          cin>>A[i][j];
        cout<<endl;  
    }
    int k=0,l=0;
    int lr=n-1,lc=m-1;
    while(k<=lr && l<=lc)
    {
         for (int i=l;i<=lc;i++)
        {
            cout<<A[k][i]<<" ";
        }
        k++;

        for (int i = k; i<=lr;i++) {
            cout << A[i][lc] << " ";
        }
        lc--;

        if (k<=lr) {
            for (int i =lc; i >= l;i--) {
                cout << A[lr][i] << " ";
            }
           lr--;

            if (l <= lc) {
            for (int i =lr; i >= k;i--) {
                cout << A[i][l] << " ";
            }
            l++;
        }
 
    }
}
}
