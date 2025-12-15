#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    int marks[n]; 
    for(i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for(i = 0; i < n; i++) {
        sum += marks[i];
    }
    printf("\nTotal marks: %d\n", sum);
    return 0;
}



