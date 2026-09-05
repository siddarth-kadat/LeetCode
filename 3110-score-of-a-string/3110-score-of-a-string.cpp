class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        for(int i=1;i<s.length();i++){
            int a=(int)s[i-1]-(int)s[i];
            a=abs(a);
            ans+=a;
        }
        return ans;
    }
};