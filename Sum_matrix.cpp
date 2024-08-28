#include "Sum_matrix.h"
#include <assert.h>

int * sum_matrix(int* matrix1, int* matrix2, size_t SIZEI, size_t SIZEJ){
    int * matrix3 = (int*) calloc(SIZEI*SIZEJ, sizeof(int));

    for(size_t i = 0; i < SIZEI; i++){

        for(size_t j = 0; j < SIZEJ; j++){

            *(matrix3+SIZEJ*i+j) = *(matrix1+SIZEJ*i+j) + *(matrix2+SIZEJ*i+j);

        }
    }
    return matrix3;
}
