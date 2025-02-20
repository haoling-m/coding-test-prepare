"""
Given an array of integers arr and two integers k and threshold, 
return the number of sub-arrays of size k and average greater than or equal to threshold.
"""
def aboveThreshold(arr, k, threshold):
    ans = 0
    curr_sum = 0
    n = len(arr)

    for i in range(n):
        curr_sum += arr[i]
        if i < k-1:
            continue    
        if curr_sum/k >= threshold:
            ans += 1
        curr_sum -= arr[i-k+1]
    
    return ans

# Time complexity: O(n)
# Space complexity: O(1)

# Example
arr = [2, 3, 5, 6, 8, 10]
k = 3
threshold = 4
print(aboveThreshold(arr, k, threshold)) # Output: 3