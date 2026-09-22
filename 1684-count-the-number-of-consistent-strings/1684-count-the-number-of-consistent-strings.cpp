class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;

        for(int i=0;i<words.size();i++){
            int flag;
            for(char a:words[i]){
                flag=0;
                for(int k=0;k<allowed.length();k++){
                    if(allowed[k]==a){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    break;
                }
            }
            if(flag==1){
                ans++;
            }
        }
        return ans;
    }
};