class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int total_sum = 0;
        int n = nums.size();
        
        int total_subsets = 1 << n;
        
        for (int i = 0; i < total_subsets; i++) {
            int current_xor = 0;
            for (int j = 0; j < n; j++) {
                if ((i >> j) & 1) {
                    current_xor ^= nums[j];
                }
            }
            total_sum += current_xor;
        }
        
        return total_sum;
    }
};