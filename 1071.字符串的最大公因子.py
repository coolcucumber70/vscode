class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        for i in range(min(len(str1),len(str2)),0,-1):
            if len(str1)%i==0 and len(str2)%i==0:
                if str1==str1[:i]*(len(str1)//i) and str2==str1[:i]*(len(str2)//i):
                    return str1[:i]
        return ''