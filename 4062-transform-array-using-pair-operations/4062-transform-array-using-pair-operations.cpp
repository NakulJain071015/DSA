class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long sum1 = 0, sum2 = 0;
        for(auto x : source){
            sum1 += x;
        }
        for(auto x : target){
            sum2 += x;
        }
        if(sum1 != sum2)return false;
        return true;
    }
};