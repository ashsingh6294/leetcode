class Solution:
    def isAlphanumeric(self , s):
        x = ord(s)
        if 97 <= x <= 122 or 65 <= x <= 90 or 48 <= x <= 57:
            return True
        return False
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()

        left = 0
        right = len(s)-1

        while left < right:
            if not self.isAlphanumeric(s[left]):
                left += 1
            elif not self.isAlphanumeric(s[right]):
                right -= 1
            elif s[left] == s[right]:
                left += 1
                right -= 1
            else:
                return False

        return True
        