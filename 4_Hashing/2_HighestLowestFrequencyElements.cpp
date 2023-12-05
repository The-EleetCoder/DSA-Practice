vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    vector <int> ans;
    map <int,int> mpp;
    for( int i=0; i<v.size(); i++){
        mpp[v[i]]++;
    }

    int maxi = INT_MIN;
    int minn = INT_MAX;
    
    for (auto it: mpp){
        minn = min(minn, it.second);
        maxi = max(maxi, it.second); 
    }

    int max2 = INT_MAX;
    int min2 = INT_MAX;
    for (auto it: mpp){
        if (it.second == minn && it.first < min2){
            min2 = it.first;
        }
        if (it.second == maxi && it.first < max2){
            max2 = it.first;
        }
    }
    if (maxi == minn){
        ans.push_back(min2);
    }
    else{
        ans.push_back(max2);
    }
    ans.push_back(min2);
    return ans;
}