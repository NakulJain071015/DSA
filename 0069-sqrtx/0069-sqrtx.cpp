class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1) return x;
       
        int st = 0;
        int end = x;
        int ans = 0;
        while(st <= end){
            long long mid = st + (end - st)/2;
            long long square = mid*mid;
            if(square == x)return mid;
            else if(square > x){
                
                end = mid-1;
            }
            else{
                ans = mid;
                st = mid+1;
            }
           
        }
        return floor(ans);
        
    }
};