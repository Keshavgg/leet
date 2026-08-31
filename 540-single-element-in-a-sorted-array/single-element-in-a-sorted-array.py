class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:

        s=0
        e=len(nums)-1

        while s<e:
            mid=(s+e)//2

            if nums[mid]==nums[mid+1]:
                mid+=1
            
            if nums[mid-1]!=nums[mid] and nums[mid+1]!=nums[mid]:return nums[mid]
            
            size=mid-s+1

            if size%2==0:
                s=mid+1
            else:
                e=mid-2
        return nums[s]

            

            
        