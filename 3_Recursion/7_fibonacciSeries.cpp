vector<int> generateFibonacciNumbers(int n) {
    vector<int> ans;
    if (n == 1) return {0};
    if (n==2) return {0, 1};

    ans = generateFibonacciNumbers(n-1);
    ans.push_back(ans[n-2]+ans[n-3]);
    return ans;
}