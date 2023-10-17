#include <stdio.h>

int find_odd(int arr[], int n) {
  int result = 0;
  for (int i = 0; i < n; i++) {
    result ^= arr[i];
  }
  return result;
}

int main() {
  int arr[] = {1,2,2,3,3,3,4,3,3,3,2,2,1};
  int n = sizeof(arr) / sizeof(arr[0]);

  int odd_int = find_odd(arr, n);
  printf("odd in array is: %d\n", odd_int);

  return 0;
}