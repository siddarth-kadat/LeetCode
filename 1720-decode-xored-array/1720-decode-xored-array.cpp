class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr(encoded.size()+1,first);
        for(int i=1;i<encoded.size()+1;i++){
            int x=encoded[i-1]^arr[i-1];
            arr[i]=x;
        }
        return arr;
    }
};