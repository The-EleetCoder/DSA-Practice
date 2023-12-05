vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    vector <int> arr(n,0);
    for (int i =0;i<n;i++){
        arr[nums[i]-1]++;
    }
    return arr;    
}