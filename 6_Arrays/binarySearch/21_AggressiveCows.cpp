bool f(vector<int> &stalls, int k, int mid) {
  int cowsCount = 1, last = stalls[0];
  for (int i = 1; i < stalls.size(); i++) {
    if (stalls[i] - last >= mid) {
      cowsCount++;
      last = stalls[i];
    } else {
      continue;
    }
  }
  return cowsCount >= k;
}

int aggressiveCows(vector<int> &stalls, int k) {
  //    Write your code here.
  sort(stalls.begin(), stalls.end());
  int low = 1;
  int high = stalls[stalls.size() - 1] - stalls[0];

  while (low <= high) {
    int mid = low + (high - low) / 2;
    bool isPossible = f(stalls, k, mid);

    if (isPossible) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return high;
}