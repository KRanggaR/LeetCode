class Solution {
    public int maximumWealth(int[][] accounts) {
        int i;
        int j;
        int sum=0;
        int temp=0;
        for(i=0;i<accounts.length;i++){
            for(j=0;j<accounts[i].length;j++){
                sum=sum+accounts[i][j];
            }
            if(sum>temp)
                temp=sum;
                sum=0;
        }
        return temp;
    }
}