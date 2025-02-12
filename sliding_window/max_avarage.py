class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        max_sum = float(-inf)
        cur_sum = 0

        for i, num in enumerate(nums):
            cur_sum += num
            if i < k -1:
                continue
            max_sum = max(max_sum, cur_sum)
            cur_sum -= nums[i -(k-1)]

        return max_sum / k
    
# Test cases    
s = Solution()
print(s.findMaxAverage([1,12,-5,-6,50,3], 4)) # 12.75
print(s.findMaxAverage([5], 1)) # 5.0
print(s.findMaxAverage([5, 5], 1)) # 5.0