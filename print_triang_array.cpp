#include "print_triang_array.h"

void print_triang_array(int * arr, size_t size_arr){
    size_t arr_lenth = (1+size_arr)*size_arr/2;
    size_t width = max_width_in_array(arr, arr_lenth);
    for(size_t count = 0, printed_cells = 0; printed_cells<arr_lenth; count++){
        for(size_t i = 0; i<=count; i++){

            printf("%*d ", width, arr[printed_cells]);
            printed_cells++;
        }

        printf("\n");
    }
}
