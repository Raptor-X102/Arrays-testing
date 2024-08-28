#include "find_max_val_in_array.h"

size_t max_width_in_array (int * arr, size_t lenth){

    size_t max = 0;
    for (size_t i = 0; i < lenth; i++){

        if(max<(size_t)*(arr+i)){

            max = *(arr+i);

        }

    }
    int n = 0;
    while(max>0){

        max /= 10;
        n++;

    }
    return n;
}
