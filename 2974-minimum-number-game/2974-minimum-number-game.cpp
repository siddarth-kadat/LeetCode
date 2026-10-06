class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr(nums);
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i=i+2){
            swap(arr[i],arr[i+1]);
        }
        return arr;
    }
};