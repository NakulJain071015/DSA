class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int maxBottles = numBottles;
        int empty = numBottles;
        while(empty >= numExchange){
            int exchanged = empty/numExchange;
            maxBottles += exchanged;

            empty = exchanged + (empty%numExchange);
        }
        return maxBottles;
    }
};