class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        vector<vector<int>>v(heights.size(),vector<int>(heights[0].size(),INT_MAX));

        v[0][0]=0;


        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        pq.push({0,{0,0}});
        vector<int>x={0,0,1,-1};
        vector<int>y={1,-1,0,0};


        while(!pq.empty())
        {
            auto[w,n]=pq.top();
            pq.pop();
            auto[x1,y1]=n;
            for(int i=0;i<4;i++)
            {
                int X=x1+x[i];
                int Y=y1+y[i];
                if(X>=0 and X<heights.size() and Y>=0 and Y<heights[0].size())
                {
                    int a=max(w,abs(heights[x1][y1]-heights[X][Y]));
                    if(a<v[X][Y]){
                        v[X][Y]=a;
                        pq.push({a,{X,Y}});
                    }
                }
            }
        }
        return v[heights.size()-1][heights[0].size()-1];
    }
};