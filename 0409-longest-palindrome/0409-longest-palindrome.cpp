class Solution {
public:
    int longestPalindrome(string s) {
        int l=0;
        unordered_map<char,int> mp;
        
        for(char c:s){
            mp[c]++;
        }
    
        for(auto a:mp){
            if(a.second%2==0){
                l+=a.second;
            }
            else{
                l+=a.second-1;
            }
        }
        if(l==s.length()) return l;
        return l+1;
    }
};