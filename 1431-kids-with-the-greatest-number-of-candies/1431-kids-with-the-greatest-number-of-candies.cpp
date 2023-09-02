class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> B;
        int n=candies.size();
        int max=*max_element(candies.begin(), candies.end());
        for(int i=0;i<n;i++)
        {
            candies[i]+=extraCandies;
            if(candies[i]>=max)
            {
                B.push_back(true);
            }
            else
            {
                B.push_back(false);
            }
        }
        return B;
    }
};