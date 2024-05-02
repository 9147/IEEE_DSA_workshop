class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        arr = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        j =0
        result =0
        for i in s:
            if j==(len(s)-1):
                result+=arr[i]
            elif i=='I' and (s[j+1]=='V' or s[j+1]=='X'):
                           result-=1
            elif i=='X' and (s[j+1]=='L' or s[j+1]=='C'):
                           result-=10
            elif i=='C' and (s[j+1]=='D' or s[j+1]=='M'):
                           result-=100
            else:
                           result+=arr[i]
            j+=1
        return result