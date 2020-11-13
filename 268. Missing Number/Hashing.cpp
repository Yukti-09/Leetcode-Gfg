class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int i;
        int k;
        vector<int> num(nums.size()+1,-1);
        for(i=0;i<nums.size();i++)
        {
            if(num[nums[i]]==-1)
            { 
             num[nums[i]]=0;
            }
                 
        }
        for(i=0;i<num.size();i++)
        {
            if(num[i]==-1)
                k=i;
        }
        return k;
    }
};
