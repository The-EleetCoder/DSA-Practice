class Solution {
public:
    int high(vector<int>& nums, int target, int left, int right){
        int ans = -1;
        while (left<=right){
            int mid = left + (right - left)/2;

            if (nums[mid]==target){
                ans = mid;
                left = mid + 1;
            }
            else if (nums[mid]<target) left = mid + 1;
            else right = mid - 1;
        }
        return ans;
    }

    int low(vector<int>& nums, int target, int left, int right){
        int ans = -1;
        while (left<=right){
            int mid = left + (right - left)/2;

            if (nums[mid]==target){
                ans = mid;
                right = mid - 1;
            }
            else if (nums[mid]<target) left = mid + 1;
            else right = mid - 1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        
        if (nums.size()==0) return {-1,-1};
        
        int left = 0;
        int right = nums.size() - 1;

        int first = low(nums,target,left,right);
        int last = high(nums,target,left,right);

        return {first,last};
    }
};