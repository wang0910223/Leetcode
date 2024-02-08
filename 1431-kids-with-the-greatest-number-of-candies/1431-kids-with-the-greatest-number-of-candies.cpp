class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = -1;
        for( int &item : candies){
            if(item > max) max = item;
        }

        vector<bool> ans;
        for( int &item : candies){
            (item + extraCandies >= max) ? ans.push_back(true) : ans.push_back(false);
        }
        return ans;
        
    }
};