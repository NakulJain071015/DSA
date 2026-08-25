class Solution {
public:

    int missingMultiple(vector<int>& nums, int k) {
        set<int> st;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }

        int curr = k;
        while(st.count(curr)){
            curr += k;
        }

        return curr;


    }
};