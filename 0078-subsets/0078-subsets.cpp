class Solution {
public:
void printF(int ind, vector<int> &ds, vector<int> &arr, vector<vector<int>>&ans, int n){
    if(ind == n){
       ans.push_back(ds);
       return;
    }
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,ans,n);
    ds.pop_back();


    printF(ind+1,ds,arr,ans,n);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> ds;
        vector<vector<int>> ans;
        printF(0,ds,nums,ans,nums.size());

        return ans;
    }
};