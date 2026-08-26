#include <stdio.h>

void traverse(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}

void insert(int arr[], int *n, int val, int pos){
    for(int i = *n; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    (*n)++;
}

void dlt(int arr[], int *n, int pos){
    for(int i = pos; i < *n - 1; i++){
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void main(){
    int arr1[] = {30, 20, 15, 73, 56};
    int n = sizeof(arr1) / sizeof(int);
    traverse(arr1, n);

    insert(arr1, &n, 4, 3);

    traverse(arr1, n);

    dlt(arr1, &n, 2);

    traverse(arr1, n);
    
}
