#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> res;
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); ++i) {

   	 if (mp.find(target - nums[i]) != mp.end()) {

   		 res.emplace_back(i);
   		 res.emplace_back(mp[target - nums[i]]);
   		 return res;
   	 }

   	 mp[nums[i]] = i;
    }

    return res;
}
int main()
{
    vector<int>res={12,4,5,6};
    int target=9;
    vector<int> result= twoSum (res, 9);
    for(int i: result)
     {
          cout<<i<<endl;
     }
     return 0;
}    