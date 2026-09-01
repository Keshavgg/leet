import heapq
class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:

        a=[]
        def v(a):
            if len(a)==1:
                return 1 if a[0]==1 else  0

            s=0
            e=len(a)-1
            ans=-1

            while s<=e:

                mid=(s+e)//2

                if a[mid]==1:
                    ans=mid
                    s=mid+1
                else:e=mid-1
            return ans
        
        ans=[]

        for i in range(0,len(mat)):

            heapq.heappush(a,(v(mat[i]),i))
        
        while k != 0:
            ans.append(heapq.heappop(a)[1])
            k-=1
        return ans
