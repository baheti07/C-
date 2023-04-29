#include<bits/stdc++.h>
using namespace std;
int maxScore(vector<int>& cardPoints, int k) {
       int tmp=0;
        int max=0;
        for(int i=0;i<k;i++) tmp+=cardPoints[i];
        max=tmp;
        if(cardPoints.size()==k) return max;
        int rp=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--)
        {
            tmp=tmp-cardPoints[i]+cardPoints[rp];
            if(tmp>max) max=tmp;
            rp--;
        }
        return max;
    }
    int main()
    {
        vector<int>cardPoints{1,2,3,4,5,6,1};
        int k=3;
        cout<<maxScore(cardPoints,k);

    }
    /*
    int maxScore(vector<int>& cardPoints, int k) {
        int res = 0;
		
		//First k elements in our window
        for(int i=0;i<k;i++) res+=cardPoints[i];
        
        int curr=res;
        for(int i=k-1;i>=0;i--) {
			//We remove the last visited element and add the non-visited element from the last
            curr-=cardPoints[i];
            curr+=cardPoints[cardPoints.size()-k+i];
			
            //We check the maximum value any possible combination can give
			res = max(res, curr);
        }
        
        return res;
    }
    */