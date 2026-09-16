class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;
        stack<int> st;
        long long totalSum = 0;

       
        for (int i = 0; i <= n; i++) {
            int currentVal = (i == n) ? 0 : arr[i];

            while (!st.empty() && arr[st.top()] > currentVal) {
                int mid = st.top();
                st.pop();

               
                long long left = st.empty() ? (mid + 1) : (mid - st.top());

                
                long long right = i - mid;

                long long ways = (left * right) % MOD;
                long long contribution = (ways * arr[mid]) % MOD;

                totalSum = (totalSum + contribution) % MOD;
            }
            st.push(i);
        }

        return totalSum;
    }
};