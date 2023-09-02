class Solution {
    public boolean isPalindrome(int n) {
        int temp=n,sum=0,r;
        while(n>0){
            r=n%10;
            sum=(sum*10)+r;
            n=n/10;
        }
        if(sum==temp){
            return true;
        }
        else if(temp<0){
            return false;
        }
        else{
            return false;
        }
        
    }
    
}