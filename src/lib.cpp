#include "lib.h"

int array_sum(unsigned int n, int *arr){
    int sum;
    sum = 0;
    for (unsigned int i = 0; i < n; i++) {
        sum = sum + arr[i];
  }
    return sum;
}

