int removeDuplicates(vector<int> &arr, int n) {
	for (int i=1;i<arr.size();i++){
		if (arr[i]==arr[i-1]){
			arr.erase(arr.begin()+i-1);
			i--;
		}
	}
	return arr.size();
}