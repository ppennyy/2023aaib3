#week11-3a.py
class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans,total=0,0
        counter=Counter()
        for i in range(k):
            num=nums[i]
            counter[num]+=1
            total+=num
        if(len(counter)==k)ans=max(ans, total)
