#include <stdio.h>

void read_matrix(int mat[][10], int rows, int cols);
void print_matrix(int mat[][10], int rows, int cols);
void add_matrices(int a[][10], int b[][10], int c[][10], int rows, int cols);
void sub_matrices(int a[][10], int b[][10], int c[][10], int rows, int cols);

int main() {
    int a[10][10], b[10][10], c[10][10], rows, cols, k, i, j;

    printf("Type the number of rows and columns of the matrices \n: ");
    scanf("%d%d", &rows, &cols);

    printf("type the first matrix:\n");
    read_matrix(a, rows, cols);

    printf("tyoe the second matrix:\n");
    read_matrix(b, rows, cols);

    printf("type the value of k (1 for addition, 2 for subtraction): ");
    scanf("%d", &k);

    if (k == 1) {
        add_matrices(a, b, c, rows, cols);
        printf("The sum of the matrices is:\n");
        print_matrix(c, rows, cols);
    } else if (k == 2) {
        sub_matrices(a, b, c, rows, cols);
        printf("The difference of the matrices is:\n");
        print_matrix(c, rows, cols);
    } else {
        printf("Invalid value of k!\n");
    }

    return 0;
}

void read_matrix(int mat[][10], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void print_matrix(int mat[][10], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void add_matrices(int a[][10], int b[][10], int c[][10], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void sub_matrices(int a[][10], int b[][10], int c[][10], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}


