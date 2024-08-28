#include "Sum_arr.h"

int sum_arr(int* arr, size_t size_arr){
    int sum = 0;
    for(size_t i = 0; i<size_arr; i++){

        sum += arr[i];

    }
    return sum;
}
