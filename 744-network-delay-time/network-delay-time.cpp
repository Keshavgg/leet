class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        set<pair<int,int>>st;

unordered_map<int,vector<pair<int,int>>>mp;

for(auto&i:times)mp[i[0]].push_back({i[1],i[2]});
      vector<int>v(n+1,INT_MAX);
        st.insert({0,k});
        v[k]=0;

        while(!st.empty())
        {
            auto it=st.begin();
             auto [u,v1]=*it;
              st.erase(it);

              for(auto &i:mp[v1])
              {
                if(u+i.second<v[i.first])
                {
                    auto it=st.find({v[i.first],i.first});
                    if(it!=st.end()){
                    st.erase(it);
                    }
                    v[i.first]=u+i.second;
                    st.insert({v[i.first],i.first});
                }
              }

            

        }

        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(v[i]==INT_MAX)return -1;
            ans=max(ans,v[i]);

        }
        return ans;
    }
};