class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(string a:words){
            int sum=0;
            for(int i=0;i<a.size();i++){
                int val=a[i]-'a';
                sum+=weights[val];
            }
            char c='z'-sum%26;
            ans+=c;
        }
        return ans;
    }
};