class Solution {
public:
int v(vector<vector<int>>& grid,int i,int j)
{
    while(i!=grid.size())
    {
        int n_j=j+grid[i][j];

        if(n_j==-1 or n_j==grid[0].size())return -1;

        if(grid[i][j]==1 and grid[i][j+1]==-1)return -1;
        if(grid[i][j]==-1 and grid[i][j-1]==1)return -1;

        j=n_j;
        i++;     


    }
    return j;
}
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int>ans(grid[0].size(),-1);

        for(int i=0;i<ans.size();i++)
        {
            ans[i]=v(grid,0,i);
        }
        return ans; 
    }
};