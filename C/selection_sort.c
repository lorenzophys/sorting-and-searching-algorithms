#include <stdio.h>


void SelectionSort(int arr[], int length){
    for(int i=0; i<length; ++i){
        int min = i;

        for(int j=i+1; j<length; ++j){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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
    SelectionSort(arr, 10);
    Print(arr, 10);

    return 0;
}
