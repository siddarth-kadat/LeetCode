class Solution {
public:
    string removeStars(string s) {
        vector<char> ans;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*'){
                ans.pop_back();
            }
            else if(s[i]!='*'){
                ans.push_back(s[i]);
            }
        }
        string a="";
        for(int i=0;i<ans.size();i++){
            a+=ans[i];
        }
        return a;
    }
};