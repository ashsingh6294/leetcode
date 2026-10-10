class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int total = n*n;

        vector<int> count(total + 1, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int num = matrix[i][j];
                count[num]++;
            }
        }

        int repeat = 0;
        int missing = 0;

        for (int i = 1; i <= total; i++) {
            if (count[i] == 2) {
                repeat = i;
            }

            if (count[i] == 0) {
                missing = i;
            }
        }

        return{repeat,missing};
        
    }
};