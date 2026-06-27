class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int>st;

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')continue;
                if(st.count(board[i][j]))return false;
                st.insert(board[i][j]);

            }
            st.clear();
        }
         st.clear();

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[j][i]=='.')continue;
                if(st.count(board[j][i]))return false;
                st.insert(board[j][i]);

            }
            st.clear();
        } 

         st.clear();
        for(int i=0;i<9;i++)
        {
            int box=i;
            int i1=(i/3);
            i1*=3;
            
            box%=3;
            int j1=3*(box);

            for(int k=i1;k<i1+3;k++)
            {
                for(int k1=j1;k1<j1+3;k1++)
                {
                    if(board[k][k1]=='.')continue;
                    if(st.count(board[k][k1]))return false;
                    st.insert(board[k][k1]);
                }
            }
                st.clear();

        }
         st.clear();

return true;
    }
};