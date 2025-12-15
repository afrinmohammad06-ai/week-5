#include <stdio.h>
int main() {
    int matrix[10][10];
    int i, j, rows, cols, zeroCount = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 0)
                zeroCount++;
        }
    }
    if(zeroCount > (rows * cols) / 2)
        printf("The matrix is sparse.\n");
    else
        printf("The matrix is not sparse.\n");
    return 0;
}
















