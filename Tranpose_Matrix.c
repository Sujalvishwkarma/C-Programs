#include <stdio.h>
#include <conio.h>

int main()
{
    int Matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int Transposed_matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Transposed_matrix[i][j] = Matrix[j][i];
        }
    }

    for (int k = 0; k < 3; k++)
    {
        for (int t = 0; t < 3; t++)
        {
            printf("%d\t",Transposed_matrix[k][t]);
        }
        printf("\n");
    }
}