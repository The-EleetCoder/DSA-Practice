vector < int > sortedArray(vector < int > a, vector < int > b) {

    vector<int> arr;
    int pa=0, pb=0;

    while(pa<a.size() && pb<b.size()){
        if (a[pa]<=b[pb]){
            if (arr.size()==0 || arr.back()!=a[pa])
                arr.push_back(a[pa]);
            pa++;
        }
        else if(b[pb]<a[pa]){
            if (arr.size()==0 || arr.back()!=b[pb])
                arr.push_back(b[pb]);
            pb++;
        }
    }

    while(pa<a.size()){
        if (arr.size()==0 || arr.back()!=a[pa])
            arr.push_back(a[pa]);
        pa++;
    }
    
    while(pb<b.size()){
        if (arr.size()==0 || arr.back()!=b[pb])
            arr.push_back(b[pb]);
        pb++;
    }

    return arr;
}