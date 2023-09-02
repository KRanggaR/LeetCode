class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_sf=prices[0];
        int max_pro=0;
        for(int i=0;i<prices.size();i++)
        {
            min_sf=min(min_sf,prices[i]);
            int profit=prices[i]-min_sf;
            max_pro=max(max_pro,profit);
        }
        return max_pro;
    }
};