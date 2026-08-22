class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller;
        vector<int> larger;
        vector<int> equal;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot){
                smaller.push_back(nums[i]);
            }
            else if(nums[i] > pivot){
                larger.push_back(nums[i]);
            }
            if(nums[i] == pivot){
                equal.push_back(nums[i]);
            }
        }
        smaller.insert(smaller.end(),equal.begin(),equal.end());
        smaller.insert(smaller.end(),larger.begin(),larger.end());

        return smaller;
        

    }
};