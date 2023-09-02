class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f=-1;
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            if(target==nums[i])
            {
                return i;
            }
        }
        return f;
    }
};