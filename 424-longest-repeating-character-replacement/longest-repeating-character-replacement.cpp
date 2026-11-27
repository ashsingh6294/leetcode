class Solution {
public:
    int characterReplacement(string s, int k) {

        int n = s.size();
        int j = 0;
        int max_freq = 0;
        int len = 0;

        unordered_map <char,int> freq;

        for (int i = 0; i < n; i++) {
            freq[s[i]]++;

            if (freq[s[i]] > max_freq) {
                max_freq = freq[s[i]];
            }

            while ((i - j + 1) - max_freq > k) {
                freq[s[j]]--;
                j++;
            }

            len = max(len,i - j + 1);
        }

        return len;
        
    }
};