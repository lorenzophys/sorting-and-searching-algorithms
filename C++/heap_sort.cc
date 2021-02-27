#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include <string>


template <typename Iterator>
void HeapSort(Iterator start, Iterator end){
    std::make_heap(start, end);
    
    while(start!=end){
        std::pop_heap(start, end);
        --end;
    }
}


template <typename T>
void Print(T& container){
    for(const auto& element : container){
        std::cout << element << " ";
    }

    std::cout << std::endl;
}


int main(){
    std::vector<int> vec = {-2, 94, 7, -90, -34, 30, 24, 3, 100, -23};
    std::array<double, 10> arr = {-2.5, 94.5, 7.5, -90.5, -34.5, 30.5, 24.5, 3.5, 100.5, -23.5};
    std::string str = "std::string";

    Print(vec);
    HeapSort(vec.begin(), vec.end());
    Print(vec);

    Print(arr);
    HeapSort(arr.begin(), arr.end());
    Print(arr);

    Print(str);
    HeapSort(str.begin(), str.end());
    Print(str);
}