class Solution {
public:
    string largestOddNumber(string num) {
        int i = 0;
        int n = num.length();
        for (int j = n - 1; j >= i;j--) {
            if((num[j]-'0')%2 != 0){
                return num.substr(i,j+1);
            } 
        }

        return "";
    }
};