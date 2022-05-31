#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum=0,ans=0;
        mp[sum] = 1;
        for(auto it:nums){
            sum += it;
            int find = sum - k;
            if(mp.find(find) != mp.end()){
                ans += mp[find];
            }
            mp[sum]++;
        }
        return ans;
//PLEASE UPVOTE IF YOU LIKE MY SOLUTION  :)
    }
    int main()
    {
        vector<int>nums={13,0,6,15,16,2,15,-12, 17, -16, 0, -3, 19, -3, 2, -9, -6};
        int k=15;
        cout<<subarraySum(nums,k);
    }