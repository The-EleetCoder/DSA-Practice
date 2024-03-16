class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int count = 0;
        mpp[0] = 1;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];
            if (mpp.find(sum - k) != mpp.end()) {
                count += mpp[sum - k];
            }
            mpp[sum] += 1;
        }
        return count;
    }
};