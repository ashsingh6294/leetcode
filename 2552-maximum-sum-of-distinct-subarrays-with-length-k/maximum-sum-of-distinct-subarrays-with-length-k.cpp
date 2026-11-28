class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        int i = 0;
        long long sum = 0;
        long long maxSum = 0;

        unordered_map <int,int> mp;

        for (int j = 0; j < k; j++) {
            mp[nums[j]]++;
            sum += nums[j];
        }

        if (mp.size() == k) {
            maxSum = sum;
        }

        for (int j = k; j < n; j++) {
            sum += nums[j];
            mp[nums[j]]++;
            sum -= nums[i];
            mp[nums[i]]--;

            if (mp[nums[i]] == 0) {
                mp.erase(nums[i]);
            } i++;

            if (mp.size() == k) {
                maxSum = max(maxSum,sum);
            }
        }

        return maxSum;
        
    }
};