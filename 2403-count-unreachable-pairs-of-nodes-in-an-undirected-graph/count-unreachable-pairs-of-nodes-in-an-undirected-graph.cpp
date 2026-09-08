class Solution {
public:
int find(vector<int>&parent,int i)
{
    if(parent[i]==i)return i;

    return parent[i]=find(parent,parent[i]);
}
void uni(vector<int>&parent,int i,int j)
{
     int a=find(parent,i);
     int b=find(parent,j);
          if(a==b)return;

     parent[a]=b;           
}
    long long countPairs(int n, vector<vector<int>>& edges) {
        long long mod=1e9+7;
        long long ans=0;
vector<int>parent(n,0);
for(int i=0;i<parent.size();i++)parent[i]=i;
         for(auto &i:edges)
         { 
            uni(parent,i[0],i[1]);
              
         }
         unordered_map<int,int>mp;
        for(int i=0;i<parent.size();i++)
        {
             mp[find(parent,i)]+=1;
        }

        for(auto &i:mp)
        {
            ans+=(1LL*(mp[i.first])*(n-mp[i.first]));


        }
        ans/=2;
return ans;

    }
};