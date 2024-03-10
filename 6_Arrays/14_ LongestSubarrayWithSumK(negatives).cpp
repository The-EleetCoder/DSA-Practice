#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int K){
    unordered_map<int, int> hashmap; // Maps sum to index
    int currentSum = 0;
    int maxLength = 0;

    hashmap[0] = -1; // Initialize hashmap with running sum 0 at index -1

    for (int i = 0; i < nums.size(); ++i) {
        currentSum += nums[i];

        if (hashmap.find(currentSum - K) != hashmap.end()) {
            maxLength = max(maxLength, i - hashmap[currentSum - K]);
        }

        if (hashmap.find(currentSum) == hashmap.end()) {
            hashmap[currentSum] = i;
        }
    }

    return maxLength;
}