class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>profit;
        for(int i=0;i<n-1;i++){
            if(prices[i]<prices[i+1]){
                profit.push_back(prices[i+1]-prices[i]);
            }
        }
        return accumulate(profit.begin(),profit.end(),0);
    }
};