class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        bool check[128] = {};
        for(char ch : jewels){
            check[ch] = true;
        }
        int cnt = 0;

        for(char ch : stones){
            if(check[ch]){
                cnt++;
            }
        }
        return cnt;
    }
};