#include <stdio.h>

void insertionSort(int array[], int size)
{
    int key, j;

    for(int i = 1; i < size; i++)
    {
        key = array[i];
        j = i;

        while(j > 0 && array[j-1] > key)
        {
            array[j] = array[j-1];
            j--;
        }

        array[j] = key;
    }
}

void selectionSort(int array[], int size)
{
    int i, j, min, temp;

    for(i = 0; i < size-1; i++)
    {
        min = i;

        for(j = i+1; j < size; j++)
        {
            if(array[j] < array[min])
                min = j;
        }

        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

void display(int array[], int size)
{
    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main()
{
    int arr[100], n, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    while(1)
    {
        printf("\n<-- MENU -->\n");
        printf("1. Insertion Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insertionSort(arr, n);
                printf("Array after Insertion Sort:\n");
                display(arr, n);
                break;

            case 2:
                selectionSort(arr, n);
                printf("Array after Selection Sort:\n");
                display(arr, n);
                break;

            case 3:
                printf("Current Array:\n");
                display(arr, n);
                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}