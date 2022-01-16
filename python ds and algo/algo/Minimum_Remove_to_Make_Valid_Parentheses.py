#https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/

#Input: s = "lee(t(c)o)de)"
#Output: "lee(t(c)o)de"
#Explanation: "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted.

class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        s = list(s)
        stack = []
        for i in range(len(s)):
            if s[i]=='(':
                stack.append(i)
            elif (s[i]==')' and len(stack)):
                stack.pop()
            elif s[i]==')':
                s[i]=''
        while len(stack):
            x = stack.pop()
            s[x]=''
            
        s = ''.join(s)
        return s
        