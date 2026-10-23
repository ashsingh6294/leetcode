class Solution {
public:
    int findLucky(vector<int>& nums) {

        unordered_map <int,int> freq;
        int largest = -1;

        for (int num : nums) {
            freq[num]++;
        }

        for (int num : nums) {
            if (freq[num] == num) {
                if (num > largest) {
                    largest = num;
                }
            }
        }

        return largest;
        
    }
};