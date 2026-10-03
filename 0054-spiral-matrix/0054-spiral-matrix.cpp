class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();

        int srow=0,scol=0;
        int erow=m-1, ecol=n-1;
        vector<int> ans;

        while(srow<=erow && scol<=ecol){
            for(int i=scol;i<=ecol;i++){
                ans.push_back(matrix[srow][i]);
            }

            for(int j=srow+1;j<=erow;j++){
                ans.push_back(matrix[j][ecol]);
            }

            for(int i=ecol-1;i>=scol;i--){
                if(erow==srow){
                    break;
                }
                ans.push_back(matrix[erow][i]);
            }

            for(int j=erow-1;j>srow;j--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(matrix[j][scol]);
            }
            srow++;
            erow--;
            scol++;
            ecol--;
        }
        return ans;
    }
};