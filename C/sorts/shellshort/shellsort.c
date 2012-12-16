#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int less(int a, int b) {
  if (a < b) return 1;
  return 0;
}

void exch(int *arr, int a, int b) {
  int tmp = arr[b];
  arr[b] = arr[a];
  arr[a] = tmp;
}

int shellsort(int *arr, int c) {
  int N = c; // length of array
  int h = 1;

  while(h < N/3) h = 3 * h + 1;

  while(h >= 1){
    for(int i = h; i < N; i++){
      for(int j = i; j >= h && less(arr[j], arr[j-h]); j -= h) {
        exch(arr, j, j-h);
      }
    }

    h /= 3; // reduce h until we are at insertion sort
  }
}

int main(int argc, const char **argv) {
  srand(time(NULL));
  int upper = atoi(argv[1]) - 1;

  int arr[upper];
  for(int i = 0; i < upper; i++) {
    arr[i] = rand();
  }

  shellsort(arr, upper);

  for(int i = 0; i < upper; i++)
    printf("%d\n", arr[i]);

  return 0;
}
