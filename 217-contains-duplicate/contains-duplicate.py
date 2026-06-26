class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
       
        nums.sort()
        n = len(nums)
        left = 0
        right = 1

        while right < n:
            if nums[left] == nums[right]:
                return True
            elif nums[left] != nums[right]:
                left += 1
                right += 1

        return False

            