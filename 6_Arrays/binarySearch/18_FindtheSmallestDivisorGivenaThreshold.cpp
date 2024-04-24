class Solution {
    bool validSum(vector<int>& nums, long long int mid, long long int threshold){
        long long int sum = 0;
        for (long long int i=0;i<nums.size();i++){
            sum += ceil((double)nums[i]/(double)mid);
            if (sum>threshold) return false;
        }
        return true;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long int low = 1;
        long long int high = *max_element(nums.begin(), nums.end());

        while (low<=high){
            long long int mid = low + (high - low)/2;
            long long int isValidSum = validSum(nums, mid, threshold);

            if (isValidSum) {
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};