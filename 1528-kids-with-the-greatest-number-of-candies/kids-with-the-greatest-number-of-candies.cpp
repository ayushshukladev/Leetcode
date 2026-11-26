class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>total(n,true);
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(candies[j]>candies[i] + extraCandies){
                    total[i] = false;
                }
            }
        }
        return total;
    }
};