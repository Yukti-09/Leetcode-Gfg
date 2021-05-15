class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int summ=0,summ1=0;
        for(int i=0;i<(nums.size()+1);i++)
        {
            summ+=i;
        }

          for(int i=0;i<nums.size();i++)
        {
            summ1+=nums[i];
        }
   
        return(summ-summ1);
    }
};
