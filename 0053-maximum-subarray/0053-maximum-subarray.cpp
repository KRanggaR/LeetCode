class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0;
        int maxsum=nums[0];
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            cursum =cursum + nums[i];
            if(cursum>maxsum){
                maxsum=cursum;
            }
            if(cursum<0){
                cursum=0;
            }
        }
        return maxsum;
    }
};