#include <stdio.h>

int main(){
    int arr1[] = {30, 20, 15, 73, 56};
    int arr2[] = {10, 24, 37};
    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);

    int res[n1 + n2];

    for (int i = 0; i < n1 + n2; i++){
        if(i < n1){
            res[i] = arr1[i];
        }
        else{
            res[i] = arr2[i - n1];
        }
    }

    for (int i = 0; i < n1 + n2; i++){
        printf("%d ", res[i]);
    }
}
