class Solution {
public:
    int minMoves(vector<int>& nums) {
        long int sum=0;
        int min=nums[0];
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(min>nums[i])
                min=nums[i];
        }

        return sum-(long int)n*min;

    }
};