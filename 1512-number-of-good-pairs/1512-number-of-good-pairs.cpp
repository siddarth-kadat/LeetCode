class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c=0;
        int i=0,j=nums.size()-1;

        while(i!=j){
            if(nums[i]==nums[j]){
                c++;
            }
            j--;
            if(j==i){
                i++;
                j=nums.size()-1;
            }
        }
        return c;
    }
};