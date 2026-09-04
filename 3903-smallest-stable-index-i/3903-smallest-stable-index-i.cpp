class Solution {
public:
    int Max(vector<int>& nums, int i){
        int m=nums[0];
        for(int a=1;a<=i;a++){
            m=max(nums[a],m);
        }
        return m;
    }

    int Min(vector<int>& nums, int i){
        int m=nums[i];
        for(int a=i;a<nums.size();a++){
            m=min(nums[a],m);
        }
        return m;
    }

    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> score;

        for(int i=0;i<nums.size();i++){
            int s=Max(nums,i) - Min(nums,i);
            score.push_back(s);
        }
        int j=-1, ans=INT_MAX;
        for(int i=0;i<score.size();i++){
            if(score[i]<=k){
                return i;
            }
        }
        return j;

    }
};