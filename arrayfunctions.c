#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int printArr(int arr[], int length) {
  printf("[");
  int i;
  for(i = 0; i < length; i++) {
    // does not have space for last element
    if(i == length - 1) {
      printf("%d", arr[i]);
    }
    else {
    printf("%d ", arr[i]);
    }
  }
  printf("]");

  return 0;
}

double avgArr(int arr[], int length) {
  int a = 0;
  int i;
  for(i = 0; i < length; i++) {
    a += arr[i];
  }

  return (double)a / length;
}

int copyArr(int arr[], int arr2[], int length) {
  int i;
  for(i = 0; i < length; i++) {
    arr2[i] = arr[i];
  }
  return 0;
}
int main() {
  int length = 10;
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  printf("array 1: ");
  printArr(arr, length);
  printf("\naverage of int values in array: %0.3f", avgArr(arr, length));

  int arr2[10];
  copyArr(arr, arr2, length);
  printf("\ncopied array: ");
  printArr(arr2, length);

  return 0;
  }
