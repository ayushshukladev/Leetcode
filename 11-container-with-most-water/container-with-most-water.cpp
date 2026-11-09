class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int left = 0;
        int right = height.size() - 1;
        while(left < right) {
            int w = right - left;
            int h = min(height[left], height[right]);
            int area = w*h;
            maxwater = max(area, maxwater);
            height[left]<height[right] ? left ++ : right --;
        }

        return maxwater;
        
    }
};