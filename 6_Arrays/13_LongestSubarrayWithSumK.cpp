int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int right = 0;
    int left = 0;
    long long sum = a[0];
    int length = 0;
    int n = a.size();

    while (right<n){
        while (left<=right && sum>k){
            sum-=a[left];
            left++;
        } 
        if (sum==k){
            length = max(length, right-left+1);
        }
        right++;
        if (right < n){
            sum+=a[right];
        }
    }
    return length;
}