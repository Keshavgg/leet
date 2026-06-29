class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int maxi=nums[0];
        int mini=nums[0];
        int tot=nums[0];
        int endh=nums[0];
        int endl=nums[0];
        for(int i=1;i<n;i++){
            tot += nums[i];
            maxi = max(maxi+nums[i],nums[i]);
            endh = max(maxi,endh);

            mini = min(mini+nums[i],nums[i]);
            endl = min(mini,endl);
            
        }

        if (endh<0){
            return endh;
        }

        return  max(endh,tot-endl);
        
    }
};