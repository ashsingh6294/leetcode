class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        
        result = []
        for i in nums:
            start = 0
            for j in nums:
                if i > j:
                    start += 1
            result.append(start)
        return result
