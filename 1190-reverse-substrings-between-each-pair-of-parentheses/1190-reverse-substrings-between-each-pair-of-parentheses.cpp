class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i + 1);
            }
            else if (s[i] == ')') {
                int start = st.top();
                st.pop();

                reverse(s.begin() + start, s.begin() + i);
            }
        }

        string ans = "";

        for (char ch : s) {
            if (ch != '(' && ch != ')') {
                ans += ch;
            }
        }

        return ans;
    }
};