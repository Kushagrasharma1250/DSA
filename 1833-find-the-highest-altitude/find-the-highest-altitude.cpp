class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> sum(n + 1);
        sum[0] = 0;
        for (int i = 0; i < n; i++) {
            sum[i + 1] = sum[i] + gain[i];
        }
        return *max_element(sum.begin(), sum.end());
    }
};