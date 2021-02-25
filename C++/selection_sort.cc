#include <iostream>
#include <vector>
#include <utility>


void SelectionSort(std::vector<int>& arr){
    int length = arr.size();

    for(int i=0; i<length; i++){
        int min = i;

        for(int j=i+1; j<length; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }

        std::swap(arr[i], arr[min]);
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
    SelectionSort(arr);
    Print(arr);
}