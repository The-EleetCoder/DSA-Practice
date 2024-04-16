int floor (vector<int> &a, int low, int high, int x){
	int ans = -1;
	while (low<=high){
		int mid = low + (high - low)/2;
		if (a[mid]<=x){
			ans = mid;
			low = mid + 1;
		}
		else high = mid - 1;
	}
	return (ans == -1 ? -1 : a[ans]);
}

int ceil (vector<int> &a, int low, int high, int x){
	int ans = -1;
	while (low<=high){
		int mid = low + (high - low)/2;
		if (a[mid]>=x){
			ans = mid;
			high = mid - 1;
		}
		else low = mid + 1;
	}
	return (ans == -1 ? -1 : a[ans]);
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
   pair <int,int> ans;
	
	int low = 0;
	int high = n-1;

   ans.first = floor(a, low, high, x);
   ans.second = ceil(a, low, high, x);
   return ans;
}