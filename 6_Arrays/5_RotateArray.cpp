vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    int k1 = k % n;
    reverse(arr.begin(), arr.begin() + k1);
    reverse(arr.begin() + k1, arr.begin() + n);
    reverse(arr.begin(), arr.begin() + n);
    return arr;
}