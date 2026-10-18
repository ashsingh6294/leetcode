class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int> freq;
        int maxFreq = 0;
        int ans = 0;

        for ( int num : nums) {
            freq[num]++;
        }
        
        for (int num : nums) {
            if (freq[num] > maxFreq) {
                maxFreq = freq[num];
                ans = num;
            }
        }

        return ans;
    }
};