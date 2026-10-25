class Solution {
public:
    void powerSet(vector<vector<int>>& ans,vector<int>& nums,vector<int>& current, int n, int i){
        if(i==n){
            ans.push_back(current);
            return;
        }
        current.push_back(nums[i]);
        powerSet(ans,nums,current,n,i+1);
        current.pop_back();
        powerSet(ans,nums,current,n,i+1);
        
    }

    vector<vector<int>> subsets(vector<int>& nums){
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> current;
        int i=0;
        powerSet(ans,nums,current,n,i);
        return ans;
    }
};