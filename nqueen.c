//nqueen
#include <stdio.h>
#include <stdlib.h>

int x[20], n;

int place(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (x[i] == col ||
            abs(x[i] - col) == abs(i - row))
            return 0;
    }

    return 1;
}

void nqueen(int row)
{
    if (row == n)
    {
        for (int i = 0; i < n; i++)
            printf("%d ", x[i] + 1);

        printf("\n");
        return;
    }

    for (int col = 0; col < n; col++)
    {
        if (place(row, col))
        {
            x[row] = col;
            nqueen(row + 1);
        }
    }
}

int main()
{
    printf("Enter number of queens: ");
    scanf("%d", &n);

    if (n <= 0 || n > 20)
        return 0;

    printf("Solutions (column positions for each row):\n");
    nqueen(0);

    return 0;
}