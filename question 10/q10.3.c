//Row wise sum of 2d array//
#include <stdio.h>

int main() {
    int a[10][10];
    int r, c, i, j;
    int sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nRow-wise sum:\n");
    for(i = 0; i < r; i++) {
        sum = 0;
        for(j = 0; j < c; j++) {
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
/*
Enter number of rows and columns:  2 2
Enter elements of the 2D array:
1 2 3 4 

Row-wise sum:
Sum of row 1 = 3
Sum of row 2 = 7
*/