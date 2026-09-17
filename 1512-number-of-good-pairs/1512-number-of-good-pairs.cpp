class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        int ans = 0;
        for(auto x : mpp){
            if(x.second != 1){
                ans += x.second*(x.second - 1)/2;
            }
        }
        return ans;
    }
};