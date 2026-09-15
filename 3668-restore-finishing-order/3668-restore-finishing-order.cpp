class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;

        for(int i=0;i<friends.size();i++){
            for(int j=0;j<order.size();j++){
                if(friends[i]==order[j]){
                    ans.push_back(j);
                    break;
                }
            }
        }
        sort(ans.begin(),ans.end());

        for(int i=0;i<ans.size();i++){
            ans[i]=order[ans[i]];
        }
        return ans;
    }
};