class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> temp;
        
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            temp.push_back({nums[i],i});
        }

        sort(temp.begin(),temp.end());
        int s = 0;
        int e = n-1;
        while(s<e){
            int sum = temp[s].first + temp[e].first;
            if(sum == target){
                return {temp[s].second , temp[e].second};
            }
            else if(sum>target){
                e--;
            }else{
                s++;
            }
        }
        return {-1,-1};
    }
};