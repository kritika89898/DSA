class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<int>b(k+1,INT_MIN) , s(k+1,0);
        int n = prices.size();
        for (int p : prices) {
            for (int j = 1; j <= k; j++) {
                b[j] = max(b[j], s[j - 1] - p);
                s[j] = max(s[j], b[j] + p);
            }
        }
        return s[k];
    }
};