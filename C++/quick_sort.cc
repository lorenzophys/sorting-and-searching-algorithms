#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include <string>


template <typename Iterator>
void QuickSort(Iterator start, Iterator end){
    if(end<=start){
        return;
    }
    else{
        Iterator pivot = start;
        Iterator ptr = start + 1;

        for(Iterator it=start+1; it<end; ++it){
            if(*it<*pivot){
                std::iter_swap(it, ptr);
                ++ptr;
            }
        }

        std::iter_swap(ptr-1, start);

        QuickSort(start, ptr-1);
        QuickSort(ptr, end);
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
    QuickSort(vec.begin(), vec.end());
    Print(vec);

    Print(arr);
    QuickSort(arr.begin(), arr.end());
    Print(arr);

    Print(str);
    QuickSort(str.begin(), str.end());
    Print(str);
}