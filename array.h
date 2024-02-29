#ifndef AASD_1_ARRAY_H
#define AASD_1_ARRAY_H
struct my_matrix {
    int **data;
    int row;
    int* col;
};

int *vector(struct my_matrix *matrix);


#endif
