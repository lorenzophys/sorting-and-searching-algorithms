#include <stdio.h>


int IterativeBinarySearch(int arr[], int target, int low, int high){
    while(low<=high){
        int mid = low + (high - low) / 2;

        if(target<arr[mid]){
            high = mid - 1;
        }
        else if(target>arr[mid]){
            low = mid + 1;
        }
        else{
            return mid;
        }
    }

    return -1;
}


int RecursiveBinarySearch(int arr[], int target, int low, int high){
    while(low<=high){
        int mid = low + (high - low) / 2;

        if(target<arr[mid]){
            return RecursiveBinarySearch(arr, target, low, mid-1);
        }
        else if(target>arr[mid]){
            return RecursiveBinarySearch(arr, target, mid+1, high);
        }
        else{
            return mid;
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
    int arr[10] = {-90, -34, -23, -2, 3, 7, 24, 30, 94, 100};
    
    Print(arr, 10);
    int indexIter = IterativeBinarySearch(arr, 30, 0, 10);
    printf("Iterative - Target at index: ");
    printf("%d\n", indexIter);
    
    int indexRec = RecursiveBinarySearch(arr, 30, 0, 10);
    printf("Recursive - Target at index: ");
    printf("%d\n", indexRec);

    return 0;
}
