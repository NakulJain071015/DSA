class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long reversed = 0;
        long previous = x;
        while(x > 0){
            long last = x%10;
            reversed = reversed * 10 + last;
            x /= 10;
        }

        if(reversed == previous){
            return true;
        }
        else{
            return false;
        }

    }
};