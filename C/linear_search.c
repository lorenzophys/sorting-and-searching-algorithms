#include <stdio.h>


int LinearSearch(int arr[], int length, int target){
    for(int i=0; i<length; ++i){
        if(arr[i]==target){
            return i;
        }
    }

    return -1;
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
    int index = LinearSearch(arr, 10, 30);
    
    printf("Target at index: ");
    printf("%d\n", index);

    return 0;
}
