#include <iostream>
#include <vector>


void Merge(std::vector<int>& arr, std::vector<int>& left, std::vector<int>& right){
    int leftPtr = 0;
    int rightPtr = 0;
    int ptr = 0;

    int lenLeft = left.size();
    int lenRight = right.size();

    while(leftPtr<lenLeft && rightPtr<lenRight){
        if(left[leftPtr]<=right[rightPtr]){
            arr[ptr] = left[leftPtr];
            leftPtr++;
        }
        else{
            arr[ptr] = right[rightPtr];
            rightPtr++;
        }
        ptr++;
    }

    while(leftPtr<lenLeft){
        arr[ptr] = left[leftPtr];
        leftPtr++;
        ptr++;
    }

    while(rightPtr<lenRight){
        arr[ptr] = right[rightPtr];
        rightPtr++;
        ptr++;
    }
}


void MergeSort(std::vector<int>& arr){
    if(arr.size()<=1){
        return;
    }
    else{
        int mid = arr.size() / 2;

        std::vector<int> left(arr.begin(), arr.begin()+mid);
        std::vector<int> right(arr.begin()+mid, arr.end());

        MergeSort(left);
        MergeSort(right);
        Merge(arr, left, right);
    }
}


void Print(const std::vector<int>& arr){
    for(const auto& entry : arr){
        std::cout << entry << " ";
    }

    std::cout << std::endl;
}


int main(){
    std::vector<int> arr = {-2, 94, 7, -90, -34, 30, 24, 3, 100, -23};

    Print(arr);
    MergeSort(arr);
    Print(arr);
}