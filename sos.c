// SoS
#include <stdio.h>

int a[20], n, target, x[20];

void subset(int i, int sum)
{
    if (sum == target)
    {
        printf("Subset found: ");
        for (int j = 0; j < i; j++)
        {
            if (x[j] == 1)
                printf("%d ", a[j]);
        }
        printf("\n");
        return;
    }

    if (i == n || sum > target)
        return;

    x[i] = 1;
    subset(i + 1, sum + a[i]);

    x[i] = 0;
    subset(i + 1, sum);
}

int main()
{
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Subsets with the given sum:\n");
    subset(0, 0);

    return 0;
}
