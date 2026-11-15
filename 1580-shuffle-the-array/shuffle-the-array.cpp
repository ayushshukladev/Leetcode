class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int a = nums.size();
        vector<int> ans(2 * n);
        int x=0;
        int y=n;
        int count =0;
        while(x<n){
            ans[count] = nums[x];
            count++;
            ans[count] = nums[y];
            count++;
            x++;
            y++;
        }
        return ans;
    }
};