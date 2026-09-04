class Solution {
public:
int v(unordered_map<int,vector<int>>&mp,int i,unordered_set<int>&visit){
if(visit.count(i))return 0;
    deque<int>q;
    q.push_back(i);
    while(!q.empty()){
        int i=q.front();
        q.pop_front();
        visit.insert(i);

    for(auto &j:mp[i])
    {
          if(!visit.count(j))q.push_back(j);
    }
    }
    return 1;
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        unordered_map<int,vector<int>>mp;

        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected.size();j++)
            {
                if(isConnected[i][j]==1 and i!=j){mp[i].push_back(j);
                
                }
            }
        }
        unordered_set<int>visit;
int ans=0;
        for(int i=0;i<isConnected.size();i++)
        {
         ans+=v(mp,i,visit);

        }
        return ans;
    }
};