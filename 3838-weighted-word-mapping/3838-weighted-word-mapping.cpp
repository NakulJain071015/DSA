class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int sum = 0;
        string ans;

        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].length(); j++) {
                sum += weights[words[i][j] - 'a'];

            }
            int modulo = sum % 26;
            ans.push_back('z' - modulo);
            sum = 0;
        }

        return ans;
    }
};