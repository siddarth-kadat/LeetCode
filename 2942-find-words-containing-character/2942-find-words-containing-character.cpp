class Solution {
public:

    bool isPresent(string a,char x){
        for(char c:a){
            if(c==x){
                return true;
            }
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        for(int i=0;i<words.size();i++){
            if(isPresent(words[i],x)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};