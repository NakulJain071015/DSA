class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(auto x : nums){
            sum += x;
        }
        int lar = nums[0];
        int small = nums[0];
        for(auto x : nums){
            if(x > lar) lar = x;
            if(x < small) small = x;
        }
        int sum1 = lar*(lar + 1)/2;
        if(small == 1)return 0;
        if((sum1 - sum) == 0)return lar+1;
        return sum1 - sum;
    }
};