#include <stdio.h>
int main() {
    int matrix[2][2];
    int i, j, trace = 0;
    printf("Enter elements of 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        trace += matrix[i][i]; 
    }
    printf("The trace of the matrix is: %d\n", trace);
    return 0;
}















