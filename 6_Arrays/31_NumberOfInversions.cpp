int merge(vector<int>& arr, int l, int mid, int r) {
    
    vector<int> temp;
    int left = l, right = mid+1;

    int inv = 0;

    while(left <= mid && right <= r) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } 
        else {
            temp.push_back(arr[right]);
            inv += (mid-left+1);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left++]);
    }
 
    while(right <= r) {
        temp.push_back(arr[right++]);
    }

    for(int i = l; i <= r; i++) {
        arr[i] = temp[i-l];
    }

    return inv;
}

int mergeSort(vector<int>& arr, int l, int r) {
    int inv = 0;
    if( l == r) return inv;
    int mid = (l+r)/2;
    inv+=mergeSort(arr, l, mid);
    inv+=mergeSort(arr, mid+1, r);
    inv+=merge(arr, l, mid, r);
    return inv;
}

int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
    int inv = 0;
    inv = mergeSort(a, 0, n-1);
    return inv;
}