#include <stdio.h>

int main() {
     //Practical 9: Q 9.3 Sum of all even elements of an array//
    // aarav singh erp 11731 //
    int n, i;
    int arr[100];
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
/*
Enter number of elements: 5
Enter elements:
1 2 3 4 5 
Sum of even elements = 6. 
*/