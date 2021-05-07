class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>ans;        
        unordered_map<int, int> index;
        int tar;
        
        for(int i=0;i<nums.size();i++)
        {   
            int t = target - nums[i];
            if (index.find(t) != index.end())
            {
                return {index[t], i};
            }
            
            index[nums[i]] = i;
        }
        
        
        return {};
        
    }
};
