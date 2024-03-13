vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector <int> ans;
    int n = a.size();

    // adding the last element
    ans.push_back(a[n-1]);

    int maxElement = a[n-1];
    for (int i=n-2;i>=0;i--){
        if (a[i]>maxElement){
            ans.push_back(a[i]);
            maxElement = a[i];
        }
    }
    return ans;
}