vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector <int> ans;

    int max = a[0];
    int min = a[0];
    for (int i=0;i<n;i++){
        if (a[i]>max) max = a[i];
        if (a[i]<min) min = a[i];
    }
    
    int max2 = -1;
    int min2 = INT_MAX;
    for (int i=0;i<n;i++){
        if (a[i]>max2 && a[i]!=max) max2 = a[i];
        if (a[i]<min2 && a[i]!=min) min2 = a[i];
    }

    ans.push_back(max2);
    ans.push_back(min2);

    return ans;
}
