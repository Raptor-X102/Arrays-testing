#include "Dynamic_mem_array.h"

int ** create_variable_lenth_array(int** array_of_ends, int*size_of_arr_of_starts){
    int num_cols = 0;
    int * dynamic_array = NULL;
    printf("Введите количество строк массива: ");
    scanf("%d", size_of_arr_of_starts);
    int size_rows = *size_of_arr_of_starts;
    int** array_of_beg = (int**) calloc(size_rows, sizeof(int*));
    for(int i = 0; i < size_rows;i++){

        printf("Введите длину строки %d: ", i+1);
        scanf("%d", &num_cols);
        dynamic_array = (int*) calloc(num_cols, sizeof(int));

        printf ("Заполните строку %d: ", i);
        int j = 0;
        for(;(j<num_cols);j++){

            if(scanf("%d", dynamic_array+j) != 1){

                break;

            }
        }
        if(j!=num_cols){

            for(int k=j; k<num_cols-j;k++){

                dynamic_array[k] = 0;

            }
        }
        array_of_beg[i] = dynamic_array;
        array_of_ends[i] = dynamic_array+num_cols-1;
    }

    return array_of_beg;
}
