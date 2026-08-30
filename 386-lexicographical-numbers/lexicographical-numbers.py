class Solution:
    def lexicalOrder(self, n: int) -> List[int]:

        def v(i):
            nonlocal n
            if i>n:return []
            right=[]

            if i%10!=9: right=v(i+1)
            left=v(i*10)

            
            
            return [i]+left+right
        
        
        return v(1)




        