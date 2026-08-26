class Solution {
public:
int gcd(int x, int y){
    while(y != 0){
        int temp = y;
        y = x%y;
        x = temp;
    }
    return x;
}
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        for(int i = 1; i <= n*2; i++){
            if( i % 2 == 0){
                sumEven += i;
            }
            else{
                sumOdd += i;
            }
        }
        return gcd(sumOdd,sumEven);
        
    }
};