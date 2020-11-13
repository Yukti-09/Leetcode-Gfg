class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
       if(nums.size()==0)
           return(0);
        
       sort(nums.begin(), nums.end());
       int k=nums.back()+1;

       for(int i=0;i<nums.size();i++)
       {
            if(nums[i]!=i)
            {
                k=i;
                break;
            }
            
        }
        return k;
    }
};
