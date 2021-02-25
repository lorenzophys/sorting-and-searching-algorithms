#include <iostream>
#include <vector>


int LinearSearch(const std::vector<int>& arr, const int target){
    int length = arr.size();

    for(int i=0; i<length; i++){
        if(arr[i]==target)
            return i;
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
    std::vector<int> arr = {-2, 94, 7, -90, -34, 30, 24, 3, 100, -23};
    int target = 30;

    int index = LinearSearch(arr, target);
    bool correct = target==arr[index];
    
    Print(arr);
    std::cout << "Target found at: " << index << std::endl;
    std::cout << "Element at " << index << " is " << arr[index] << std::endl;
    std::cout << "Correct? " << correct << std::endl;
}