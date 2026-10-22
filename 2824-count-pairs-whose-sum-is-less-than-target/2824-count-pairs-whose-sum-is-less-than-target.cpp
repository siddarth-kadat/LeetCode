class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count=0;

        int l=0,n=nums.size();
        int r=n-1;
        while(l!=n-1){
            if(nums[l]+nums[r--]<target){
                count++;
            }
            if(l==r){
                l++;
                r=n-1;
            }
        }
        return count;
    }
};