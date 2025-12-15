#include <stdio.h>
int main() {
    int n, i, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum number in the array is: %d\n", min);
    return 0;
}







