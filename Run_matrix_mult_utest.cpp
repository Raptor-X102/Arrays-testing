#include <TXLib.h>
#include "Multiplication_matrix.h"
#include "Mult_matrix_utest.h"
int main(){

    int m11[2][3] =    {{1,2,3},
                        {4,5,6}};

    int m12[3][2] =    {{1,2},
                        {3,4},
                        {5,6}};
    int m13[2][2] = {};

    int m1EXP [2][2] = {{22,28},
                        {49, 64}};

    int m21 [3][4] =   {{ 1,  2,  3,  4,},
                        { 5,  6,  7,  8,},
                        { 9, 10 ,11,  12}};

    int m22 [4][5] =   {{  1,  2,  3,  4,  5},
                        {  6,  7,  8,  9, 10},
                        { 11, 12, 13, 14, 15},
                        { 16, 17, 18, 19, 20}};
    int m23 [3][5] = {};

    int m2EXP [3][5] = {{110, 120, 130, 140, 150},
                        {246, 272, 298, 324, 350},
                        {382, 424, 466, 508, 550}};
    int count = Mult_matrix_utest(1, (int*) m11, 2, 3, (int*) m12, 3, 2,(int*) m13, 2, 2, (int*) m1EXP, 2, 2) +
                Mult_matrix_utest(2, (int*) m21, 3, 4, (int*) m22, 4, 5,(int*) m23, 3, 5, (int*) m2EXP, 3, 5);
    printf("Количество ошибок: %d", count);

}
