#include <stdio.h>


void BubbleSort(int arr[], int length){
    for(int i=0; i<length; ++i){
        for(int j=0; j<i; ++j){
            if(arr[j]>arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
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
    BubbleSort(arr, 10);
    Print(arr, 10);

    return 0;
}