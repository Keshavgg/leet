class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        vector<int>over=points[0];
        int ans=1;
        for(int i=1;i<points.size();i++)
        {
            if(over[1]>=points[i][0])
            {
                over[0]=points[i][0];
                over[1]=min(points[i][1],over[1]);
            }
            else
            {
                over=points[i];
                ans+=1;
            }
        }
        return ans;
    }
};