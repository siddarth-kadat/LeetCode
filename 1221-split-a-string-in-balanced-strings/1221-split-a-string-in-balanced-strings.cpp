class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int freq=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='R'){
                freq++;
            }
            else if(s[i]=='L'){
                freq--;
            }
            if(freq==0){
                count++;
            }
        }
        return count;
    }
};