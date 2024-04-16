class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = 0;
        bool flag = false;

        while (low <= high){
            int mid = low + (high - low)/2;
            if (nums[mid] == target) return mid;
            else if (nums[mid]<target){
                ans = mid;
                low = mid + 1;
                flag = true;
            }
            else {
                high = mid - 1;            }
        }
        return (ans==0 && flag==false ? 0 : ans + 1);
    }
};