//minmax
#include <stdio.h>

int a[100];

void minmax(int low, int high, int *min, int *max)
{
    int mid, min1, max1, min2, max2;

    if (low == high)
    {
        *min = *max = a[low];
    }
    else if (high == low + 1)
    {
        if (a[low] < a[high])
        {
            *min = a[low];
            *max = a[high];
        }
        else
        {
            *min = a[high];
            *max = a[low];
        }
    }
    else
    {
        mid = (low + high) / 2;

        minmax(low, mid, &min1, &max1);
        minmax(mid + 1, high, &min2, &max2);

        *min = (min1 < min2) ? min1 : min2;
        *max = (max1 > max2) ? max1 : max2;
    }
}

int main()
{
    int n, i, min, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    minmax(0, n - 1, &min, &max);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}