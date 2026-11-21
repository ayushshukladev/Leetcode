class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count0 = 0;
        int maxcount = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                count0++;
                maxcount = max(count0, maxcount);
            }
            else
            count0 = 0;
        }
        return maxcount;
    }
};