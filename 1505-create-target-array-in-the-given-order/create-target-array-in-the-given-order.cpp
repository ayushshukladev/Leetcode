class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        int m = index.size();
        vector<int>target(n,0);
        for(int i = 0; i < n; i++){
            for(int j = i; j>index[i]; j--){
                target[j] = target [j-1];
                }
                target[index[i]] = nums[i];
            }
        return target;
        }
};