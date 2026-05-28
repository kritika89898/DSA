class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MIN;
        int sell = 0;
        int cool = 0;

        for (int p : prices) {
            int prevSell = sell;

            sell = buy + p;

            buy = max(buy, cool - p);

            cool = max(cool, prevSell);
        }

        return max(sell, cool);
    }
};