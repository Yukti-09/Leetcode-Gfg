class Solution {
public:

    void SortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        
        if (nums1.empty() || nums2.empty()) return();
        
        int m = nums1.size();
        int n = nums2.size();
                
        int gap = ceil(((float)nums1.size() + (float)nums2.size())/2.0);
        
        vector<int>::iterator p1;
        vector<int>::iterator p2;
        

        while(gap>=1)
        {
            int i = 0;
            int j = gap;
            while(j < m + n)
            {
                if (i >= m)
                {
                    p1 = nums2.begin() + (i - m);
                }
                else
                {
                    p1 = nums1.begin() + i;
                }
                
                if (j >= m)
                {
                    p2 = nums2.begin() + (j - m);
                }
                else
                {
                    p2 = nums1.begin() + j;
                }
            
                
            
                if (*p1 > * p2)
                {
                    int temp = *p1;
                    *p1 = *p2;
                    *p2 = temp;
                }
            
                i++;
                j++;
            }
            gap=ceil(gap/2);
            cout<<"gap"<<gap<<endl;
        }        
        
  
    }
