//binary
#include <stdio.h>

int main()
{
    int n, i, key, low, high, mid;
    int arr[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter elements in sorted order: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element not found\n");

    return 0;
}