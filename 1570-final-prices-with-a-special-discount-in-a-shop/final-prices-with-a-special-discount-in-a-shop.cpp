class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        vector <int> ans;

        for (int i = 0; i < prices.size(); i++) {

            int greater = prices[i];

            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[i] >= prices[j]) {
                    greater = prices[i] - prices[j];
                    break;
                }
            }

            ans.push_back(greater);
        }

        return ans;
        
    }
};