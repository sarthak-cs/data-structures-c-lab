#include <stdio.h>

void main(){
    int arr[] = {30, 20, 15, 73, 56};
    int n = sizeof(arr) / sizeof(int);
    int flag = 0;
    int val;
    scanf("%d", &val);
    for (int i = 0; i < n; i++){
        if (arr[i] == val){
            flag = 1;
            printf("%d is found at index %d\n", val, i);
            break;
        }
    }

    if (!flag){
        printf("%d not found\n", val);
    }

}
