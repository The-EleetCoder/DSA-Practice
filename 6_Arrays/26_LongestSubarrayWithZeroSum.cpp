#include<vector>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	 unordered_map<int, int> hashmap; // Maps sum to index
    int currentSum = 0;
    int maxLength = 0;

    hashmap[0] = -1; // Initialize hashmap with running sum 0 at index -1

    for (int i = 0; i < arr.size(); ++i) {
        currentSum += arr[i];

        if (hashmap.find(currentSum) != hashmap.end()) {
            maxLength = max(maxLength, i - hashmap[currentSum]);
        }

        if (hashmap.find(currentSum) == hashmap.end()) {
            hashmap[currentSum] = i;
        }
    }

    return maxLength;
}