class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        n = len(nums)

        left = 0
        right = 1

        while right < n:
            if nums[left] == nums[right]:
                return True
            left += 1
            right += 1

        return False

                

                