class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCandies=*max_element(candies.begin(),candies.end());

        for(int i=0;i<candies.size();i++){
            result.push_back(candies[i]+extraCandies>=maxCandies);
        }
        return result;
    }
};