class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle=="":
            return 0  
        else:
            return haystack.find(needle)