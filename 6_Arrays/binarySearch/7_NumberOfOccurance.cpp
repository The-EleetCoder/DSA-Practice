int high(vector<int>& arr, int x, int left, int right){
    int ans = -1;
    while (left<=right){
        int mid = left + (right - left)/2;

        if (arr[mid]==x){
            ans = mid;
            left = mid + 1;
        }
        else if (arr[mid]<x) left = mid + 1;
        else right = mid - 1;
    }
    return ans;
}

int low(vector<int>& arr, int x, int left, int right){
    int ans = -1;
    while (left<=right){
        int mid = left + (right - left)/2;

        if (arr[mid]==x){
            ans = mid;
            right = mid - 1;
        }
        else if (arr[mid]<x) left = mid + 1;
        else right = mid - 1;
    }
    return ans;
}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int left = 0;
    int right = arr.size() - 1;

    int first = low(arr,x,left,right);
    int last = high(arr,x,left,right);

	if (first == -1) return 0;
	return last - first + 1;
}