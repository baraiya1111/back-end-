#include <stdio.h>

int main() {
    int arr[10], i, j, temp;

    printf("Enter 10 integers to sort:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (i = 0; i < 9; i++) {        
        for (j = 0; j < 9 - i; j++) {  
            if (arr[j] > arr[j+1]) {
                
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nSorted array in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}6
