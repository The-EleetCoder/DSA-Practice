#include <iostream>
#include <limits.h>

int findKRotation(vector<int> &arr) {
  // Write your code here.
  int low = 0;
  int high = arr.size() - 1;
  int ans = INT_MAX;
  int index = -1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[low] <= arr[high]) {
      if (arr[low] < ans) {
        ans = arr[low];
        index = low;
      }
    }

    if (arr[mid] >= arr[low]) {
      if (arr[low] < ans) {
        ans = arr[low];
        index = low;
      }
      low = mid + 1;
    } else {
      if (arr[mid] < ans) {
        ans = arr[mid];
        index = mid;
      }
      high = mid - 1;
    }
  }
  return index;
}