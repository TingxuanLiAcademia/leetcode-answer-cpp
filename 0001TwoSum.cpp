class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> mp;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            /*if (mp.contains(diff))*/
            if (mp.find(diff) != mp.end())
            {
                res.push_back(mp[diff]);
                res.push_back(i);
                return res;
            }
            /*mp.insert({nums[i],i});*/
            mp[nums[i]] = i;
        }
        return res;
    }
};