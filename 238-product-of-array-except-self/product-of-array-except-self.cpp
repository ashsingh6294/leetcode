class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int currProduct = 1;
        int maxProduct = 1;
        int zeroCount = 0;
        int zeroIndex = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroCount++;
                zeroIndex = i;
            }

            else {
                currProduct *= nums[i];
            }
        }
        
        maxProduct = currProduct;

        vector <int> ans(nums.size(),0);

        if (zeroCount >= 2) {
            return ans;
        }

        if (zeroCount == 1) {
            ans[zeroIndex] = maxProduct;
            return ans;
        }

        for (int i = 0; i < nums.size(); i++) {
            int prodArray = maxProduct / nums[i];
            ans[i] = prodArray;
        }

        return ans;
        
    }
};