class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a = nums.size();
        k=k%a;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        }
};