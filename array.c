#include <stdlib.h>
#include <stdio.h>
struct my_matrix {
    int **data;
    int row;
    int* col;
};

int *vector(struct my_matrix *matrix) {
    int *result = NULL;
    int count = 0;
    int size = 1;
    while(count < matrix->row){
        int count2 = 0;
        for (int i = 0; i < matrix->col[count]; ++i) {
            for (int j = 0; j < matrix->col[count]; ++j) {
                if(matrix->data[count][i] == matrix->data[count][j] & j != i){
                    count2 += 1;
                    break;
                }
            }
        }
        result = realloc(result, size * sizeof(int));
        result[count] = count2;
        size++;
        count++;
    }
    return result;
}
