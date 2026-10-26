//quick

#include <stdio.h>

void quickSort(int arr[], int low, int high)
{
    int i, j, pivot, temp;

    if (low < high)
    {
        pivot = arr[high];
        i = low - 1;

        for (j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int p = i + 1;

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main()
{
    int n, i, arr[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}