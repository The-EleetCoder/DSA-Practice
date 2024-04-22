int floorSqrt(int n) {
  long long start = 0;
  long long end = n / 2;
  int ans = -1;

  if (n == 1)
    return 1;

  while (start <= end) {
    long long mid = start + (end - start) / 2;
    if (mid * mid == n)
      return mid;
    else if (mid * mid < n) {
      ans = mid;
      start = mid + 1;
    } else
      end = mid - 1;
  }
  return ans;
}