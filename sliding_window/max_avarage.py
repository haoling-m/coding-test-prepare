from math import inf
from typing import List

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

"""
定长滑窗套路
入-更新-出。

入：下标为 i 的元素进入窗口，更新相关统计量。
如果 i<k−1 则下个循环。
更新：更新答案。一般是更新最大值/最小值。
出：下标为 i−k+1 的元素离开窗口，更新相关统计量

"""