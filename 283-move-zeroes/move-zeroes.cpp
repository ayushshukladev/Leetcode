class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count1 = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!= 0){
                swap(nums[i], nums[count1]);
                count1++;
            }
        }

        return;
    }
};