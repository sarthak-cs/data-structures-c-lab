#include <stdio.h>

int main()
{
    int arr[] = {15, 23, 7, 42, 18};
    int n = 5;
    int key;
    int flag = 0;
    int i;

    printf("Enter element: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++){
        if (arr[i] == key){
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("Element found at index %d\n", i);
    else
        printf("Element not found.\n");

    return 0;
}
