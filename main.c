#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int main() {
    struct my_matrix my_matrix;
    int choice;

    printf("Введите количество строк: ");
    scanf("%d", &my_matrix.row);

    my_matrix.data = (int **)malloc(my_matrix.row * sizeof(int *));
    my_matrix.col = (int *)malloc(my_matrix.row * sizeof(int));

    for (int i = 0; i < my_matrix.row; i++) {
        printf("\nВведите количество элементов в строке %d: ", i + 1);
        scanf("%d", &choice);

        my_matrix.col[i] = choice;
        my_matrix.data[i] = (int *)malloc(choice * sizeof(int));

        printf("\nВведите элементы строки %d:\n", i + 1);
        for (int j = 0; j < choice; ++j) {
            scanf("%d", &my_matrix.data[i][j]);
        }
    }

    printf("\nВведенная матрица:\n");
    for (int i = 0; i < my_matrix.row; i++) {
        for (int j = 0; j < my_matrix.col[i]; ++j) {
            printf("%d ", my_matrix.data[i][j]);
        }
        printf("\n");
    }

    printf("Результирующий вектор: ");
    int *new_vectror = vector(&my_matrix);
    for (int i = 0; i < my_matrix.row; ++i) {
        printf("%d ",new_vectror[i]);
    }
    free(new_vectror);
    free(my_matrix.data);
    free(my_matrix.col);

    return 0;
}
