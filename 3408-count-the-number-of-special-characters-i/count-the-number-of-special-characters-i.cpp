class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<int> st;
        for(auto x:word){
            st.insert(x);
        }
        int cnt = 0;
        for(auto y:st){
            if(y>='a' && y<='z'){
                char up = (char)toupper(y);
                cout<<up<<" ";
                if(st.find(up) != st.end()){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};