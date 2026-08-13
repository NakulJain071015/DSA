class Solution {
public:
    int subtractProductAndSum(int n) {
         int sum = 0;
        int prod = 1;
        int last;
        while(n > 0){
            last = n%10;
            n = n/10;
            sum += last;
            prod *= last;

        }
        return (prod - sum);
    }
};