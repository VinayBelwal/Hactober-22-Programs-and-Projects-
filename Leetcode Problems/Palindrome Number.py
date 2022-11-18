class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x<0:
            return False
        else:
            y=0 
            x1=x
            while(x!=0):
                y=(y*10)+(x%10)
                x=x//10 
            if x1==y:
                return True
            else:
                return False