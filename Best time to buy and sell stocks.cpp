class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy = prices[0];
        int maximum = 0;
        for(int i =1;i<prices.size();i++){
            if(prices[i]>bestbuy){
                maximum = max(maximum,prices[i]-bestbuy);

            }
            else{
                bestbuy = min(bestbuy,prices[i]);
            }

        }
        return maximum;

    }
};

