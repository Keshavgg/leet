class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int ans=1;
if(grid[0][0]==1)return -1;
if(grid.size()==1 and grid[0][0]==0)return 1;
        deque<pair<int,int>>q;
        set<pair<int,int>>st;
        st.insert({0,0});

        q.push_back({0,0});
vector<int>x={0,0,1,-1,1,1,-1,-1};
vector<int>y={1,-1,0,0,1,-1,1,-1};
        while(!q.empty())
        {
            
            ans+=1;
            int n=q.size();
            for(int k=0;k<n;k++){
           auto[X,Y]=q.front();
           q.pop_front();
           for(int i=0;i<8;i++)
           {
            int X1 =X+x[i];
            int Y1=Y+y[i];
            if(X1<grid.size() and X1>=0 and Y1<grid.size() and Y1>=0 and !st.count({X1,Y1}) and grid[X1][Y1]==0){
                if(X1==grid.size()-1 and Y1==grid.size()-1)return ans;
                st.insert({X1,Y1});
                q.push_back({X1,Y1});

            }
           }
            }
        }
        return -1;
    }
};