class Solution {
public:
    int missingInteger(vector<int>& arr) {
        int n = arr.size();
        map<int,int>mpp;
       int sum = arr[0];
       for(int i = 1; i < n; i++){
        if(arr[i] != arr[i -1] + 1){
            break;
        }
        sum += arr[i];
       }
       for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
       }
       for(int i = 0; i < n; i++){
        if(mpp.find(sum) != mpp.end()){
            sum++;
        }
       }
       return sum;
    }
};