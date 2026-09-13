#include <stdio.h>

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    printf("Array before sorting: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;
            }
        }

        if (!swapped)
            break;
    }


    printf("\nSorted array: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
