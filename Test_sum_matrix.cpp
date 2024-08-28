#include "Sum_matrix.h"
#include "2d_Arrays_output.h"
#include <stdlib.h>
const size_t SIZEI = 4;
const size_t SIZEJ = 3;
int main(){
    int m1 [SIZEI][SIZEJ] = {{ 1, 2, 3},
                             { 4, 5, 6},
                             { 7, 8, 9},
                             {10,11,12}};
    int m2 [SIZEI][SIZEJ] = {{ 2, 3, 4},
                             { 5, 5, 6},
                             { 7, 8, 9},
                             {10,11,12}};
    int* m3 = sum_matrix((int*)m1, (int*)m2, SIZEI, SIZEJ);
    if(m3 == NULL){

        fprintf(stderr,"Error! Memory wasn't allocated");
        exit(0);

    }
    print_2d_array(m3, SIZEI, SIZEJ);
    free(m3);



}
