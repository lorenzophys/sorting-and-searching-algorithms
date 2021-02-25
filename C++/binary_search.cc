#include <iostream>
#include <vector>


int IterativeBinarySearch(const std::vector<int>& arr, const int target, int low, int high){
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


int RecursiveBinarySearch(const std::vector<int>& arr, const int target, int low, int high){
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


void Print(const std::vector<int>& arr){
    for(const auto& entry : arr){
        std::cout << entry << " ";
    }

    std::cout << std::endl;
}


int main(){
    std::vector<int> arr = {-90, -34, -23, -2, 3, 7, 24, 30, 94, 100};
    int target = 30;

    int indexIter = IterativeBinarySearch(arr, target, 0, arr.size()-1);
    bool correctIter = target==arr[indexIter];
    
    Print(arr);

    std::cout << "Iterative search:" << std::endl;
    std::cout << "Target found at: " << indexIter << std::endl;
    std::cout << "Element at " << indexIter << " is " << arr[indexIter] << std::endl;
    std::cout << "Correct? " << correctIter << std::endl;

    int indexRec = RecursiveBinarySearch(arr, target, 0, arr.size()-1);
    bool correctRec = target==arr[indexRec];

    std::cout << "Recursive search:" << std::endl;
    std::cout << "Target found at: " << indexRec << std::endl;
    std::cout << "Element at " << indexRec << " is " << arr[indexRec] << std::endl;
    std::cout << "Correct? " << correctRec << std::endl;
}