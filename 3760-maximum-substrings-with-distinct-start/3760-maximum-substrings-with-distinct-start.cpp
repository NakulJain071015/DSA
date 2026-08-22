class Solution {
public:
    int maxDistinct(string s) {
        int n = s.length();
      
     map<char,int>mpp;
      for(int i = 0; i < n; i++){
        mpp[s[i]]++;
      }

      
        return mpp.size();
    }
};