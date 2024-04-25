class Solution {
    bool isMinWeight(vector<int>& weights, int days, int mid){
        int sum = 0;
        for (int i=0;i<weights.size();i++){
            if (sum + weights[i] > mid){
                days--;
                sum = 0;
            }
            sum +=weights[i];
        }
        if (days>0) return true;
        return false;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            bool minWeight = isMinWeight(weights, days, mid);
            if (minWeight)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};