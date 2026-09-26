class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map <string,string>mpp;
        for(auto &v : knowledge){
            mpp[v[0]] = v[1];
        }
        string key = "";
        string ans = "";
        bool flag = false;
        for(auto ch : s){
            if(ch == '('){
                flag = true;
            }
            else if(ch == ')'){
                if(mpp.find(key) != mpp.end()){
                    ans += mpp[key];
                }
                else{
                    ans += "?";
                }
                flag = false;
                key = "";
            }
            else if(flag){
                key += ch;
            }
            else{
                ans += ch;
            }
        }
        return ans;
        
    }
};