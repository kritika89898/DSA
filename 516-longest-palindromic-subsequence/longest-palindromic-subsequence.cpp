class Solution {
public:
    int longestCommonSub(string t1,string t2){
        int n = t1.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(t1[i-1] == t2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
    int longestPalindromeSubseq(string s) {
        string r = s;
        reverse(r.begin(),r.end());
        return longestCommonSub(s,r);
    }
};