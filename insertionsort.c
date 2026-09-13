#include <stdio.h>

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    printf("Array before sorting: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);


    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
        
    printf("\nSorted array: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
