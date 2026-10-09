class Solution {
public:
    bool isValid(string s) {
        vector<char> arr;
        
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                arr.push_back(s[i]);

            }
            else{
                if(arr.empty()) return false;
                
                char top = arr.back();
                if (c==')' && top!='(') return false;
                if (c=='}' && top!='{') return false;
                if (c==']' && top!='[') return false;
                
                arr.pop_back();
            }
        }
        return arr.empty();
    }
};