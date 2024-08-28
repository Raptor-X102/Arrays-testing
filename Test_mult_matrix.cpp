#include "2d_Arrays_output.h"
#include "Multiplication_matrix.h"
#include <stdlib.h>
const size_t SIZEI1 = 3;
const size_t SIZEJ1 = 4;
const size_t SIZEI2 = 4;
const size_t SIZEJ2 = 5;

int main(){

    int m1 [SIZEI1][SIZEJ1] = {{ 1,  2,  3,  4,},
                               { 5,  6,  7,  8,},
                               { 9, 10 ,11,  12}};
    int m2 [SIZEI2][SIZEJ2] = {{  1,  2,  3,  4,  5},
                               {  6,  7,  8,  9, 10},
                               { 11, 12, 13, 14, 15},
                               { 16, 17, 18, 19, 20}};
    int* m4 = mult_matrix((int*)m1, (int*)m2, SIZEI1, SIZEJ1, SIZEI2, SIZEJ2);
    if(m4 == NULL){

        fprintf(stderr,"Error! Memory wasn't allocated");
        exit(0);

    }
    size_t SIZEI3 = SIZEI1;
    size_t SIZEJ3 = SIZEJ2;
    print_2d_array(m4, SIZEI3, SIZEJ3);
    free(m4);

}
