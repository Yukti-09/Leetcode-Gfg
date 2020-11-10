class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int k;
        vector<int> vect(*max_element(nums.begin(), nums.end())+1,0); 
 
        for(int i=0;i<nums.size();i++)
        {
           if(vect[nums[i]]==0)
           {
               vect[nums[i]]=1;
           }
            else
            {
                k=nums[i];
                break;
            }
        }
         return k;
    }
};
