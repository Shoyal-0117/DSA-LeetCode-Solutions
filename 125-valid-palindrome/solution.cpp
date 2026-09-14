// 0 ms | 9.7 MB
class Solution {
public:
    bool isPalindrome(string s) {
        int lptr = 0, rptr = s.size()-1;
        while (lptr < rptr) {
            while (lptr < rptr && !isalnum(s[lptr])) lptr++;   // skip ALL non-alnum from left
            while (lptr < rptr && !isalnum(s[rptr])) rptr--;   // skip ALL non-alnum from right

            if (tolower(s[lptr]) != tolower(s[rptr])) return false;

            lptr++;
            rptr--;
        }
        return true;
    }
};