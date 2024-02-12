#include <stdio.h>
#include <stdlib.h>


int main() {
    int m[10][10], t[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &m[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            t[j][i] = m[i][j];

    printf("\nOriginal matrix:\n");
    for (i = 0; i < r; i++, printf("\n"))
        for (j = 0; j < c; j++)
            printf("%d\t", m[i][j]);

    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; i++, printf("\n"))
        for (j = 0; j < r; j++)
            printf("%d\t", t[i][j]);

    return 0;
}

