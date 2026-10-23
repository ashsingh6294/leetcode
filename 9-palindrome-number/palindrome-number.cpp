class Solution {
public:
    bool isPalindrome(int x) {

        string bro = to_string(x);

        int left = 0;
        int right = bro.size() - 1;

        while (left < right) {
            if (bro[left] != bro[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
          
    }
};