class Solution {
    bool calcTotalHours(vector<int>& piles, int mid, int h) {
        long long int sum = 0;
        for (int i = 0; i < piles.size(); i++) {
            sum += ceil((double)piles[i] / (double)mid);
            if (sum > h)
                return false;
        }
        return true;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long int totalHours = calcTotalHours(piles, mid, h);
            if (totalHours) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }
};