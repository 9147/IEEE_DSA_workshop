class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        s=""
        d=False
        for i in range(len(strs[0])):
            key=strs[0][i]
            for j in range(len(strs)):
                try:
                    if strs[j][i]!=key:
                       d=True
                       break
                except:
                    d=True
                    break
            if d:
                break
            else:
                s=s+key
        return s