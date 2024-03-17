int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    unordered_map <int,int> mpp;
    int count = 0;
    int x = 0;

    mpp[0] = 1;

    for (int i=0;i<a.size();i++){
        x ^= a[i];

        if (mpp.find(x^b)!=mpp.end()){
            count+=mpp[x^b];
        }

        mpp[x]++;
    }
    return count;
}