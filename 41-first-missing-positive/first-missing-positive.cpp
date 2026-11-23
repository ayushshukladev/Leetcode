class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        int i = 0;

        while(i < n) {
            int x = nums[i];

            if(x > 0 && x <= n && nums[x-1] != x) {
                swap(nums[i], nums[x-1]);
            }
            else {
                i++;
            }
        }

        for(int i = 0; i < n; i++) {
            if(nums[i] != i+1) {
                return i+1;
            }
        }

        return n+1;
    }
};