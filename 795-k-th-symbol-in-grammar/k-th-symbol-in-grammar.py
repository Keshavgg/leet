class Solution:
    def kthGrammar(self, n: int, k: int) -> int:
        

        def v(st,k):
            if st==0:
                return 0
            
            g=v(st-1,k//2)
            if k%2==0:
                if g==0:
                    return 0
                else:
                    return 1
            else:
                if g==0:
                    return 1
                else:
                    return 0
        
        return v(n-1,k-1)


            
