class Solution:
    def findPeakElement(self, nums: List[int]) -> int:


        s=0
        if len(nums)==1:return 0
        e=len(nums)-1

        if nums[0]>nums[1]:return 0

        if nums[-1]>nums[-2]:return  len(nums)-1

        while s<=e:
            mid =(s+e)//2

            if nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1]:return mid

            if nums[mid]<nums[mid+1]:s=mid+1
            else:e=mid-1
        
        return -1



        