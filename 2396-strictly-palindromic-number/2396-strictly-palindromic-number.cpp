class Solution {
public:
    bool isPalindrome(string& s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isStrictlyPalindromic(int n) {
        for (int i = 2; i <= n - 2; i++) {
            string temp = "";
            int num = n;
            while(num){
                temp += to_string(num%i);
                num = num/i;
            }

            if(!isPalindrome(temp)){
                return false;
            }
        }
        return true;
    }
};