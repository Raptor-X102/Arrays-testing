#include <stdio.h>
#include "print_triang_array.h"
#include "Sum_arr.h"
const size_t SIZE_TRI_ARR = 4;
const size_t lenth = (1+SIZE_TRI_ARR)*SIZE_TRI_ARR/2;
int main(){

    int tri_arr[lenth] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_triang_array(tri_arr, SIZE_TRI_ARR);
    printf("\n%d", sum_arr(tri_arr, lenth ));
}
