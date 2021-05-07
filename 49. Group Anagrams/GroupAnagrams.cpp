class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>> mymap;
        
       for(int i=0;i<strs.size();i++)
       {
          
           string sortedString = getSortedStr(strs[i]);
           mymap[sortedString].push_back(strs[i]); 
    
       }
       
        vector<vector<string>> ans;
    
        for (auto it : mymap)
        {
            
            ans.push_back(it.second);
        }
           
        return ans;
         
    }
    
    string getSortedStr(string s)
    {
        string str;
        vector<int>alpha(256, 0);
        
        for (int i = 0; i < s.size(); i++)
        {
            alpha[s[i]]++;            
        }
        
        
        for (int j = 0; j < 256; j++)
        {            
            if (alpha[j] > 0)
                str += string(alpha[j], (char)j); 
        }
        
        return str;
    }
};
