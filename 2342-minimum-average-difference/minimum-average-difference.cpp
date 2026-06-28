class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
         if(nums.size()==1)return 0; 
    vector<long long>prefix(nums.size(),0);
    vector<long long>sufix(nums.size(),0);

    long long s=0;

    for(int i=0;i<prefix.size();i++)
    {
        s+=nums[i];
        prefix[i]=s;
    }
    s=0;
    for(int i=prefix.size()-1;i>=0;i--)
    {
        sufix[i]=s;
        s+=nums[i];

    }
int ans=0;
int gw=nums.size()-1;
int h=abs(prefix[0] - sufix[0]/gw);
    for(int i=1;i<prefix.size()-1;i++)
    {
        int b=prefix[i]/(i+1);
        int b1=sufix[i]/(prefix.size()-i-1);
        int k=abs(b-b1);
     if(k<h)
     {
        h=k;
        ans=i;
     } 
    }
    int g=prefix[prefix.size()-1]/prefix.size();
    if(g<h)return prefix.size()-1;
return ans;

          


        


    }
};