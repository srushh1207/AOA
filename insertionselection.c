//insertionSelectionSort
#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int n)
{
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++)
    {
        min = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }

        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n, i, choice;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid size of array\n");
        return 0;
    }

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\n1. Insertion Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        insertionSort(arr, n);
    else if (choice == 2)
        selectionSort(arr, n);
    else if (choice == 3)
        return 0;
    else
    {
        printf("Invalid choice\n");
        return 0;
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}