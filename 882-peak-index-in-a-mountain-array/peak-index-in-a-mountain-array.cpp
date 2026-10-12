class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int peak = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > arr[peak]) {
                peak = i;
            }
        }

        return peak;
        
    }
};