bool validPageCount(vector<int> &arr, int m, int mid) {
  int pageCount = arr[0], studentCount = 1;
  for (int i = 1; i < arr.size(); i++) {
    if (pageCount + arr[i] > mid) {
      pageCount = arr[i];
      studentCount++;
    } else {
      pageCount += arr[i];
    }
  }
  return studentCount <= m;
}

int findPages(vector<int> &arr, int n, int m) {

  if (m > n)
    return -1;

  int low = *max_element(arr.begin(), arr.end());
  int sum = accumulate(arr.begin(), arr.end(), 0);
  int high = sum;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    bool isValidPageCount = validPageCount(arr, m, mid);
    if (isValidPageCount) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return low;
}