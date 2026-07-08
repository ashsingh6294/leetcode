class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        nums.sort()

        slow = 0

        for fast in range(len(nums)):
            if nums[fast] % 2 == 0:
                temp = nums[fast]
                nums[fast] = nums[slow]
                nums[slow] = temp
                slow += 1 

        return nums
