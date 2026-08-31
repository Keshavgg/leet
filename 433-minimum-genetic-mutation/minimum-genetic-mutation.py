class Solution:
    def minMutation(self, startGene: str, endGene: str, bank: List[str]) -> int:
        
        s=set(bank)

        q=deque()

        q.appendleft(startGene)
        z=['A','C','G','T']
        step=0
    
        while q:
         l=len(q)
            

         
         
         for _ in range(0,l,1):
            x=q[0]
            q.popleft()
            if x==endGene:return step

            for i in range(0,len(x)):
                for j in z:
                    if x[0:i]+j+x[i+1:] in s:
                        s.discard(x[:i]+j+x[i+1:])
                        q.append(x[:i]+j+x[i+1:])
         step+=1
        
            
        
        return -1