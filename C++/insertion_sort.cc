#include <iostream>
#include <vector>


void InsertionSort(std::vector<int>& arr){
    int length = arr.size();

    for(int index=1; index<length; index++){
        int key = arr[index];
        int pointer = index - 1;

        while(key<arr[pointer] && pointer>=0){
            arr[pointer+1] = arr[pointer];
            pointer--;
        }

        arr[pointer+1] = key;
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
    InsertionSort(arr);
    Print(arr);
}