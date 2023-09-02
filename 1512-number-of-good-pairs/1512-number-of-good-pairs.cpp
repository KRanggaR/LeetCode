class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        vector<int> brr(101,0);
        for(int i=0; i<n; i++)
        {
            brr[nums[i]]++;
        }
        int m=brr.size();
        for(int i=0; i<m; i++)
        {
            ans+=(brr[i]*(brr[i]-1))/2;
        }
        return ans;

    }
};