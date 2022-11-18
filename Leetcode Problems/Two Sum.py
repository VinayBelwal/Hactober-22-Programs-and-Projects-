class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        a={}
        for i in range(len(nums)):
            z=target-nums[i]
            if z not in a:
                a[nums[i]]=i 
            else:
                return [i,a[z]]