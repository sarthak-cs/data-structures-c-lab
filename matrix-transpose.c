#include <stdio.h>

void main()
{
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c], trans[c][r];

    printf("Enter matrix:\n");

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    printf("Original:\n");

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            trans[j][i] = mat[i][j];

    printf("Transpose:\n");

    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }
}
