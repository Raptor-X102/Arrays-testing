#include "Multiplication_matrix.h"

bool mult_matrix(int* matrix1, size_t SIZEI1, size_t SIZEJ1, int* matrix2, size_t SIZEI2, size_t SIZEJ2,
 int * matrix3, size_t SIZEI3_EXP, size_t SIZEJ3_EXP  ){
    if(SIZEJ1 != SIZEI2){

        printf("ћатрицы не согласованы\n");
        return false;

    }


    size_t respecting_side = SIZEJ1;
    size_t SIZEI3 = SIZEI1;
    size_t SIZEJ3 = SIZEJ2;

    if(SIZEI3 != SIZEI3_EXP or SIZEJ3 != SIZEJ3_EXP){

        printf("–азмер матрицы произведени€ не соответствует действительности\n");
        return false;

    }

    for (size_t i = 0; i < SIZEI3;i++){
        for (size_t j = 0; j < SIZEJ3; j++){
            for(size_t r = 0; r< respecting_side;r++){

                *(matrix3+SIZEJ3*i+j) += ((*(matrix1+SIZEJ1*i+r)) * (*(matrix2+SIZEJ2*r+j)));


            }
        }
    }
    return true;
}
