#include "Mult_matrix_utest.h"

int Mult_matrix_utest(int nTest,int* matrix1,                   size_t SIZEI1,           size_t SIZEJ1,
                                int* matrix2,                   size_t SIZEI2,           size_t SIZEJ2,
                                int * matrix_result,            size_t SIZEI3,           size_t SIZEJ3,
                                int * matrix_multiplicated_EXP, size_t SIZEI_matrix_EXP, size_t SIZEJ_matrix_EXP ){
    if(!mult_matrix(matrix1, SIZEI1, SIZEJ1, matrix2, SIZEI2, SIZEJ2, matrix_result, SIZEI3, SIZEJ3)){

        printf("Матрицы не согласованы или размер передоваемой не соответствует действительности");
        return 1;

    }

    for (size_t i = 0; i < SIZEI3; i++){
        for (size_t j = 0; j < SIZEJ3; j++){

            if(*(matrix_result + i*SIZEJ3 + j) != *(matrix_multiplicated_EXP+ i*SIZEJ_matrix_EXP + j)){

                printf("Test %d:\n", nTest);
                printf("Inserted:\n");
                printf("*******First Array********\n");
                print_2d_array(matrix1, SIZEI1, SIZEJ1);
                printf("*******Second Array*******\n");
                print_2d_array(matrix2, SIZEI2, SIZEJ2);
                printf("Result\n");
                print_2d_array(matrix_result, SIZEI_matrix_EXP, SIZEJ_matrix_EXP);
                printf("Expected: \n");
                print_2d_array(matrix_multiplicated_EXP, SIZEI_matrix_EXP, SIZEJ_matrix_EXP);
                return 1;
            }

        }
    }
    return 0;

}
