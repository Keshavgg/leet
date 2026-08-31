class Solution:
    def kthCharacter(self, k: int, operations: List[int]) -> str:


        def v(step,index):
            nonlocal operations
            if step==0:return 'a'

            s=2**(step-1)
            a= v(step-1,index%s)
            
            if index<=s-1:
                return a
            
            if(operations[step-1]==0):return a

            if a=='z':return 'a'

            c=chr(ord(a)+1)

            return c
        
        return v(len(operations),k-1)

        





        