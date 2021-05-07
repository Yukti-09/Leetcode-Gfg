class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        p =[]
        d = {}
        for i in range(len(strs)):
            x = ""
            lst = [0] * 26
            for j in range(len(strs[i])):
                lst[ord(strs[i][j])-ord('a')]+=1
            for k in range(len(lst)):
                if(lst[k]!=0):
                    x+=chr(k+97)*lst[k];
            if(x not in d):
                d[x]=list()
            d[x].append(strs[i])
        l=[]
        for key,values in d.items():
            l.append(values)
        return(l)
            
     
