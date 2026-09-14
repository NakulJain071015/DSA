class Solution {
public:

    vector<int> prefixMax(vector<int>& height) {
        vector<int> prefix(height.size());
        prefix[0] = height[0];

        for(int i = 1; i < height.size(); i++) {
            prefix[i] = max(prefix[i - 1], height[i]);
        }

        return prefix;
    }

    vector<int> suffixMax(vector<int>& height) {
        vector<int> suffix(height.size());
        suffix[height.size() - 1] = height[height.size() - 1];

        for(int i = height.size() - 2; i >= 0; i--) {
            suffix[i] = max(suffix[i + 1], height[i]);
        }

        return suffix;
    }

    int trap(vector<int>& height) {
        int total = 0;

        vector<int> leftMax = prefixMax(height);
        vector<int> rightMax = suffixMax(height);

        for(int i = 0; i < height.size(); i++) {
            if(height[i] < leftMax[i] && height[i] < rightMax[i]) {
                total += min(leftMax[i], rightMax[i]) - height[i];
            }
        }

        return total;
    }
};