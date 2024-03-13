class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        int maxLength = 1;
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        if (s.size() == 0)
            return 0;
        for (auto it : s) {
            if (s.find(it - 1) == s.end()) {
                int length = 1;
                int startElement = it;
                while (s.find(startElement + 1) != s.end()) {
                    length++;
                    startElement += 1;
                }
                maxLength = max(maxLength, length);
            }
        }
        return maxLength;
    }
};