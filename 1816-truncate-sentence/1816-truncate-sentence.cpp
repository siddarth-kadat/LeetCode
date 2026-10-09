class Solution {
public:
    string truncateSentence(string s, int k) {
        string a="";
        int i=0, n=s.length();
        while(k>0){
            if(s[i]==' ' && i<n){
                k--;
            }
            if(k>0)
              a+=s[i];
            
            if(k==0 || i==n-1){
                break;
            }
            i++;
            
        }
        return a;
    }
};