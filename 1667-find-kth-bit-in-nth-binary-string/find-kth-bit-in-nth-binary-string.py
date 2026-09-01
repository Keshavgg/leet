class Solution:
    def findKthBit(self, n: int, k: int) -> str:

        def v(step,k):

            if step==1:return '0'
            l=2**(step)-1
            mid=(l-1)//2

            if k==mid:return '1'
            

            if k>mid:
                a=v(step-1,mid-(k-mid-1)-1)
                if a=='0':
                    return '1'
                return '0'
            return v(step-1,k)

        
        return v(n,k-1)



            



            



        