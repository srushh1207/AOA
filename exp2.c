#include <stdio.h>

int main()
{
    int n, key;
    int arr[100];
    int low, high, mid, found = 0;

    printf("Enter the number of elements of an array: ");
    scanf("%d", &n);

    printf("Enter the sorted elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The entered array is: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found)
        printf("%d found at position %d", key, mid + 1);
    else
        printf("%d not found in the array", key);

    return 0;
}