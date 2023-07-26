#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print spaces for each row
        for (j = 1; j <= n - i; j++)
            printf(" ");

        // Print asterisks for the top and bottom rows
        if (i == 1 || i == n) {
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
        } else {
            // Print asterisks for the hollow parts
            printf("*");
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");
            printf("*");
        }

        printf("\n");
    }

    return 0;
}