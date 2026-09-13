#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int key;
    int high = n - 1;
    int low = 0;
    int mid;
    int flag = 0;

    printf("Enter element: ");
    scanf("%d", &key);

    while (low <= high){
        mid = low + (high - low) / 2;
        
        if (arr[mid] == key){
            flag = 1;
            break;
        }
        else if (arr[mid] > key){
            high = mid - 1;

        }
        else{
            low = mid + 1;
        }
    }
    

    if (flag)
        printf("Element found at index %d\n", mid);
    else
        printf("Element not found.\n");

    return 0;
}
