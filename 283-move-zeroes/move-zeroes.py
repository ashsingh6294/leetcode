class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
       
        n = len(nums)
        start = 0

        for i in range(n):
            if nums[i] != 0:
                temp = nums[start]
                nums[start] = nums[i]
                nums[i] = temp
                start += 1
        