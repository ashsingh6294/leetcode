class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        left = 0
        current = 0
        right = len(nums) - 1

        while current <= right:
            if nums[current] == 0:
                temp = nums[current]
                nums[current] = nums[left]
                nums[left] = temp
                left += 1
                current += 1

            elif nums[current] == 1:
                current += 1
            else:
                temp = nums[current]
                nums[current] = nums[right]
                nums[right] = temp

                right -= 1
        


        