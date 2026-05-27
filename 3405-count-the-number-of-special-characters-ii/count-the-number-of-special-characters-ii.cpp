class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> low(26,-1), up(26,1e9);

        for(int i = 0; i < word.size(); i++){
            if(word[i] >= 'a' && word[i] <= 'z')
                low[word[i]-'a'] = i;

            else
                up[word[i]-'A'] = min(up[word[i]-'A'], i);
        }

        int cnt = 0;

        for(int i = 0; i < 26; i++){
            if(low[i] != -1 && up[i] != 1e9 && low[i] < up[i])
                cnt++;
        }

        return cnt;
    }
};