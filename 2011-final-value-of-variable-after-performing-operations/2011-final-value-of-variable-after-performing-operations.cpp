class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0;i<operations.size();i++){
            string a=operations[i];
            if(a[0]=='+' || a[2]=='+')
                x++;
            else
                x--;
        }
        return x;
    }
};