#include <stdio.h>


void Merge(int arr[], int begin, int mid, int end){
    int lenLeft = mid - begin + 1;
    int lenRight = end - mid;

    int left[lenLeft];
    int right[lenRight];
    
    for (int i=0; i<lenLeft; ++i)
        left[i] = arr[begin+i];
        
    for (int i=0; i<lenRight; ++i)
        right[i] = arr[mid+1+i];
    
    int leftPtr = 0;
    int rightPtr = 0;
    int ptr = begin;

    while(leftPtr<lenLeft && rightPtr<lenRight){
        if(left[leftPtr]<=right[rightPtr]){
            arr[ptr] = left[leftPtr];
            leftPtr++;
        }
        else{
            arr[ptr] = right[rightPtr];
            ++rightPtr;
        }
        ++ptr;
    }

    while(leftPtr<lenLeft){
        arr[ptr] = left[leftPtr];
        ++leftPtr;
        ++ptr;
    }

    while(rightPtr<lenRight){
        arr[ptr] = right[rightPtr];
        ++rightPtr;
        ++ptr;
    }
}


void MergeSort(int arr[], int begin, int end){
    if(end<=begin){
        return;
    }
    else{
        int mid = begin + (end-begin) / 2;
        
        MergeSort(arr, begin, mid);
        MergeSort(arr, mid+1, end);
        Merge(arr, begin, mid, end);
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
    MergeSort(arr, 0, 9);
    Print(arr, 10);

    return 0;
}
