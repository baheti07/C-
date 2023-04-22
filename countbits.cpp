#include<bits/stdc++.h>
using namespace std;
int getBits(int x) {
        int count = 0;
        while (x) {
            x &= x - 1;
            count++;
        }
        return count;
    }
    //ek aur method
    /*int cb(int n)
    {
        int cnt=0;
        while(n>0)
        {
            if(n&1==1) cnt++;
            n>>=1;
        }
        return cnt;
    }*/
    int main()
    {
        int n=84;
        cout<<getBits(n);
    }