/*
53. Maximum Subarray

Find the contiguous subarray within an array (containing at least one number) which has the largest sum.


For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
the contiguous subarray [4,-1,2,1] has the largest sum = 6.


click to show more practice.

More practice:

If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/

class Solution:
  def maxSubArray(self, nums: list[int]) -> int:
    # dp[i] := the maximum sum subarray ending in i
    dp = [0] * len(nums)

    dp[0] = nums[0]
    for i in range(1, len(nums)):
      dp[i] = max(nums[i], dp[i - 1] + nums[i])

    return max(dp)


/*
Difficulty:Easy
Total Accepted:216.1K
Total Submissions:546K


Companies LinkedIn Bloomberg Microsoft
Related Topics Array Dynamic Programming Divide and Conquer
Similar Questions 
                
                  
                    Best Time to Buy and Sell Stock
                  
                    Maximum Product Subarray
*/
