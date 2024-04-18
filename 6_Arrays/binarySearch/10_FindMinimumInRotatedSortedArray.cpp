class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // if mid is the smallest element
            if (high - low >= 2) {
                if (nums[mid] < nums[mid - 1] && nums[mid] < nums[mid + 1])
                    return nums[mid];
            }

            // if the array is already sorted
            if (nums[mid] >= nums[low] && nums[mid] <= nums[high])
                return nums[low];

            // if array is not sorted
            if (nums[mid] >= nums[low])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return nums[low];
    }
};