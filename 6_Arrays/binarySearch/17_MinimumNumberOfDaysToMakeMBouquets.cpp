class Solution {
    bool isValidDay(vector<int>& bloomDay, long long int mid, int m, int k) {
        long long int count = 0;
        for (long long int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                count++;
            } else {
                long long int bouques = count / k;
                m -= bouques;
                count = 0;
            }
        }
        long long int bouques = count / k;
        m -= bouques;
        if (m > 0)
            return false;
        return true;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long int low = *min_element(bloomDay.begin(), bloomDay.end());
        long long int high = *max_element(bloomDay.begin(), bloomDay.end());

        if ((long long int)m * (long long int)k >
            (long long int)bloomDay.size())
            return -1;

        while (low <= high) {
            long long int mid = low + (high - low) / 2;
            bool validDay = isValidDay(bloomDay, mid, m, k);
            if (validDay)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};