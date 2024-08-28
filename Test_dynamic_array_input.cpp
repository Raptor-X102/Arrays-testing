#include <TXLib.h>
#include "Dynamic_mem_array.h"

int main(){

    int* array_of_ends[10] = {};
    int size_or_arr_of_starts = 52;
    int** start_of_arr = create_variable_lenth_array((int**)array_of_ends, &size_or_arr_of_starts);
    for(int i = 0; i<size_or_arr_of_starts;i++){
        printf("Массив №%d: ", i+1);
        for(int* ptr = start_of_arr[i]; ptr<=array_of_ends[i]; ptr = ptr+1){

            printf("%d ", *ptr);

        }
        printf("\n");
        free(start_of_arr[i]);
    }
    free(start_of_arr);


}
