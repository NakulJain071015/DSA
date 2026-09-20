class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
        int total = 0;
        int leftSum = 0;
        for(auto x : nums){
            total += x;
        }
        for(int i = 0; i < nums.size(); i++){
            int rightSum = total - leftSum - nums[i];
            ans.push_back(abs(leftSum - rightSum));
            leftSum += nums[i];
        }
        return ans;
    }
};