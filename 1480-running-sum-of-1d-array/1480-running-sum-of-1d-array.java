class Solution {
    public int[] runningSum(int[] nums) {
        
        int i; int sum=0;
            int n=nums.length;
        int arr[]= new int[n];
   
        for(i=0; i<n; i++){
            sum=sum+nums[i];
            arr[i]=sum;
        }
 return arr;
        
    }
}