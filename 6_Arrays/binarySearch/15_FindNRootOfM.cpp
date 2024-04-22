#include <cmath>
int NthRoot(int n, int m) {
  long long start = 0;
  long long end = m / n;

  if (m == 1)
    return 1;

  while (start <= end) {
    long long mid = start + (end - start) / 2;
    if (pow(mid,n) == m)
      return mid;
    else if (pow(mid,n) < m) {
      start = mid + 1;
    } else
      end = mid - 1;
  }
  return -1;
}