#include <stdio.h>


void InsertionSort(int arr[], int length){
    for(int i=1; i<length; ++i){
        int key = arr[i];
        int pointer = i - 1;

        while(key<arr[pointer] && pointer>=0){
            arr[pointer+1] = arr[pointer];
            --pointer;
        }

        arr[pointer+1] = key;
    }
}


void Print(int arr[], int length){
    for(int i=0; i<length; ++i){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}


int main()
{
    int arr[10] = {-2, 94, 7, -90, -34, 30, 24, 3, 100, -23};
    
    Print(arr, 10);
    InsertionSort(arr, 10);
    Print(arr, 10);

    return 0;
}