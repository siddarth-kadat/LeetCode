class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col=matrix[0].size();
        int st=0, end=matrix.size()-1;
        int mid;
        int row;

        while(st<=end){
            mid=st+(end-st)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][col-1]){
                row=mid;
                break;
            }
            else if(target<matrix[mid][0]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        st=0;
        end=col-1;

        while(st<=end){
            mid=st+(end-st)/2;
            if(target==matrix[row][mid]){
                return true;
            }
            else if(target<matrix[row][mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return false;
    }
};