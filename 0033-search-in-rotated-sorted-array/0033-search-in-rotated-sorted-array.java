class Solution {
    public int search(int[] nums, int target) {
        int i=0;
        for(i=0;i<nums.length;i++)
        {
            if(target==nums[i])
            {
                break;
            }
            
        }
        if(i>=nums.length)
        {
            i=-1;
        }
        return i;
    }
}