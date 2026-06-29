class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)

        start = 0

        for i in range(n):
            if nums[i] != 0:
                temp = nums[start]
                nums[start] = nums[i]
                nums[i] = temp

                start += 1