class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int>neg;
        for(auto x:nums){
            if(x>0){
                pos.push_back(x);
            }else{
                neg.push_back(x);
            }
        }
        vector<int> ans;
        int j = 0 , k = 0;
        for(int i = 0 ; i < n ; i++){
            if(i%2 == 0){
                ans.push_back(pos[j]); j++;
            }else{
                ans.push_back(neg[k]); k++;
            }
        }
        return ans;
    }
};