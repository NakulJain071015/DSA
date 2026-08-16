class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        for(int i = 0; i < n; i++){
            ans[i] = nums[i];
        }
        for(int i = 1; i <= n; i++){
            ans[i + n - 1] = nums[n - i];
        }

        return ans;
        

    }
};