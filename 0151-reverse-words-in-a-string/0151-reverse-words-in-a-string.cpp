class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;

        int i = 0;
        int n = s.length();

        while (i < n) {

            while (i < n && s[i] == ' ') {
                i++;
            }

            if (i >= n)
                break;

            int j = i;

            while (j < n && s[j] != ' ') {
                j++;
            }

            words.push_back(s.substr(i, j - i));

            i = j;
        }

        int left = 0;
        int right = words.size() - 1;

        while (left < right) {
            swap(words[left], words[right]);
            left++;
            right--;
        }

        string ans;

        for (int i = 0; i < words.size(); i++) {
            if (i > 0) {
                ans += " ";
            }

            ans += words[i];
        }

        return ans;
    }
};