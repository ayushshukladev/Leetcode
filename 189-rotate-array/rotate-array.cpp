class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a = nums.size();
        k=k%a;
        vector<int>rot(a);
        for(int i = 0; i<a; i++){
            rot[(i+k)%a] = nums[i];
            
        }
        nums = rot;
    }
};