class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        while(i<word.length()){
            if(word[i]==ch){
                break;
            }
            i++;
        }

        if(i==word.length()){
            return word;
        }

        int l=0;
        while(l<i){
            swap(word[i],word[l]);
            l++;
            i--;
        }
        return word;
    }
};