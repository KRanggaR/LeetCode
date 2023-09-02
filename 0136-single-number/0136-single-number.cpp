class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int j=0;j<nums.size();j++)
        {
            ans=ans^nums[j];
        }
        return ans;
    }
};