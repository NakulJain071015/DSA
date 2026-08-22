class Solution {
public:
    int maxDistinct(string s) {
        int n = s.length();
        vector<int> temp(26,0);
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(temp[s[i] - 'a'] == 0){
                cnt++;
                temp[s[i] - 'a']++; 
            }
        }
        return cnt;
    }
};