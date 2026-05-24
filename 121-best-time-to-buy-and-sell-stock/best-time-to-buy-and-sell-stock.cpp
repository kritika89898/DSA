class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mn = prices[0];
       int mx = 0;
       int n = prices.size();
       for(int i =1 ; i < n ; i++){
        if(prices[i]<mn){
            mn = prices[i];
        }
        int pro = prices[i] - mn;
        mx = max(mx,pro);
       } 
       return mx;
    }
};