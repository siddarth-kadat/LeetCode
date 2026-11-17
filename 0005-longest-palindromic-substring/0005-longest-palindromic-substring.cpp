class Solution {
public:
    bool pal(int l, int r, string s){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }


    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start=0;
        int n=s.length();
        int max=0;

        for (int len = n; len > 0; --len) {
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1;
                if (s[i] == s[j] && pal(i, j, s)) {
                    return s.substr(i, len);
                }
            }
        }

        return string(1, s[0]);
    }
};