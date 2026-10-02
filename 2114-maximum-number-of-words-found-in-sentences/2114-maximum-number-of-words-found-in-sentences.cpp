class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(int i=0;i<sentences.size();i++){
            string a=sentences[i];
            int num=0;
            for(char space:a){
                if(space==' ')
                    num++;
            }
            ans=max(ans,num+1);
        }
        return ans;
    }
};