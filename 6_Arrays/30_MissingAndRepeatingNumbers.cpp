vector<int> findMissingRepeatingNumbers(vector<int> a) {
  // s -sn
  //  s2-s2n
  long long n = a.size();

  long long sn = n * (n + 1) / 2;
  long long s2n = n * (n + 1) * (2*n + 1) / 6;
  long long s = 0, s2 = 0;

  for (int i = 0; i < n; i++) {
    s += a[i];
    s2 += (long long)a[i] * (long long)a[i];
  }

  // x-y
  long long e1 = s - sn;

  // x+y
  long long e2 = (s2 - s2n) / e1;

  // x
  long long x = (e1 + e2)/2;

  //y 
  long long y = e2 - x;

  return {(int)x, (int)y};
}