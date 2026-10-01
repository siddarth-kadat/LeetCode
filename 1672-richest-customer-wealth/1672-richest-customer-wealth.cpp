class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int i=0;i<accounts.size();i++){
            int rich=0;
            for(int j=0;j<accounts[0].size();j++){
                rich+=accounts[i][j];
            }
            ans=max(ans,rich);
        }
        return ans;
    }
};