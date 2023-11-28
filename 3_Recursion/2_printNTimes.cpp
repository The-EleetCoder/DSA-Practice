vector<string> printNTimes(int n) {
	if (n==1){
		vector <string> arr;
		arr.push_back("Coding Ninjas");
		return arr;
	}

	vector <string> arr = printNTimes(n-1);
	arr.push_back("Coding Ninjas");
	return arr;
}