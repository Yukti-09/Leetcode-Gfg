class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l=[]
        i=0
        while(i!=len(nums)):
            x=target-nums[i]
            if(x not in nums):
                i+=1
            else:
                if(nums.index(x)!=i):
                    return([i,(nums.index(x))])
                else:
                    i+=1
            
