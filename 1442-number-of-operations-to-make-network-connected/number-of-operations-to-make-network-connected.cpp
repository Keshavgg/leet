class Solution {
public:

int find(unordered_map<int,int>&mp,int i)
{
    if(i==mp[i])return i;


    return mp[i]=find(mp,mp[i]);
}
void uni(unordered_map<int,int>&mp,int i,int j)
{
 int a=find(mp,i);
 int b=find(mp,j);

mp[a]=b;
}
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)return -1;
unordered_map<int,int>mp;
for(int i=0;i<n;i+=1)mp[i]=i;

for(auto &i:connections)uni(mp,i[0],i[1]);

set<int>st;
int ans=0;
for(int i=0;i<n;i++)
{
    if(!st.count(find(mp,i))){
        st.insert(find(mp,i));
        ans+=1;

    }
}
return ans-1;
                 
    }
};