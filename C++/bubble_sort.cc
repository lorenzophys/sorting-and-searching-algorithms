#include <iostream>
#include <vector>
#include <algorithm>


void BubbleSort(std::vector<int>& arr){
    int length = arr.size();

    for(int i=0; i<length; i++){
        bool swapped = false;
        int unsorted = length - i - 1;

        for(int j=0; j<unsorted; j++){
            if(arr[j]>arr[j+1]){
                std::swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(!swapped)
            break;
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
    BubbleSort(arr);
    Print(arr);
}