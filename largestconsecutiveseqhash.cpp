#include<bits/stdc++.h>
using namespace std;
int largestconsecutive(vector<int>&arr)
{
    set<int>s;
    int longeststreak=0;
    for(int i=0;i<arr.size();i++)
      s.insert(arr[i]);
    for(int i=1;i<arr.size();i++)
    {
        if (!s.count(i-1)) {
                int currentnum = i;
                int currentStreak = 1;

                while (s.count(currentnum+1)) {
                    currentnum += 1;
                    currentStreak += 1;
                }

                longeststreak = max(longeststreak, currentStreak);
            }
        

        
    }  
    return longeststreak;
}
int main()
{
    vector<int>arr={102,4,100,1,101,3,2,5,6,7,8,9};
    cout<<"Largest consecutive sequence is:"<<largestconsecutive(arr)<<endl;
}