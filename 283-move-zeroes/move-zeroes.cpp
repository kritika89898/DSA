class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(auto x:nums){
            if(x!=0){
                ans.push_back(x);
            }
        }
        int n = nums.size();
        int m = ans.size();
        for(int i = 0 ; i < m ; i++){
            nums[i] = ans[i];
        }
        for(int i = m ; i < n ; i++){
            nums[i] = 0;
        }
    }
};