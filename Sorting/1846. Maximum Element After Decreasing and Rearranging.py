
#Link :- https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/?envType=daily-question&envId=2023-11-15




class Solution:
    def maximumElementAfterDecrementingAndRearranging(self, arr: List[int]) -> int:
        n = len(arr)
        counts = [0] * (n + 1)
        
        for num in arr:
            counts[min(num, n)] += 1
        
        ans = 1
        for num in range(2, n + 1):
            ans = min(ans + counts[num], num)
    
        return ans
