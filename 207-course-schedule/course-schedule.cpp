class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>mp;
        vector<int>visit(numCourses,0);
        for(auto&i:prerequisites)
        {
          
          mp[i[1]].push_back(i[0]);
          visit[i[0]]+=1;

        }
        deque<int>q;
        int ans=0;

        for(int i=0;i<numCourses;i++)
        {
            if(visit[i]==0)q.push_back(i);
        }
        while(!q.empty())
        {
            int k=q.front();
            q.pop_front();
            ans+=1;
            for(auto &j:mp[k]){
                visit[j]--;
                if(visit[j]==0)q.push_back(j);

            }
        }
return ans==numCourses;
    }
};