#include <iostream>
#include <vector>
#include <iterator>

#include "utils.hpp"
#include "insertion-sort.hpp"


int main(){
    // Simple Test Case
    std::vector<int> input = {31, 41, 59, 26 ,41, 58};
    std::cout << "Input: ";
    print(input);
    
    // Sorting
    std::vector<int> output = insertionSort(input);
    std::cout << "Output: ";
    print(output);

    return 0;
}