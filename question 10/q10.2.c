//Sum of diagnol elements of 2d array//
#include <stdio.h>

int main() {
    //Aarav singh,ERP 11731//
    int n, i, j;
    int arr[10][10];
    int sum = 0;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum = sum + arr[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
/*
Enter order of matrix: 3 3
Enter elements:
1 2 3 4 5 6 7 8 9 
Sum of diagonal elements = 15
*/