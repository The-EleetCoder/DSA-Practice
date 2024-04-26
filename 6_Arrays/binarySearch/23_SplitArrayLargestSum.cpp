class Solution {
    bool validSum(vector<int>& nums, int k, int mid) {
        int arrayCount = 1, sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (sum + nums[i] > mid) {
                arrayCount++;
                sum = nums[i];
            } else {
                sum += nums[i];
            }
        }
        return arrayCount <= k;
    }

public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            bool isPossible = validSum(nums, k, mid);
            if (isPossible) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};