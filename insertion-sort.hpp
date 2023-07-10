#ifndef C01C1195_26F4_4B37_9CB1_028BE921A66C
#define C01C1195_26F4_4B37_9CB1_028BE921A66C

#include <vector>
#include <iterator>

// std::vector<int> insertionSort(std::vector<int>);
std::vector<int> insertionSort(std::vector<int> input){
    std::vector<int> output;
    output.clear();

    std::vector<int>::iterator outputInsertionPointer;
    for(auto inputElement: input){
        outputInsertionPointer = output.end();
        while(outputInsertionPointer != output.begin() && inputElement < *(outputInsertionPointer-1)){
            outputInsertionPointer--;
        }

        output.insert(outputInsertionPointer, inputElement);
    }

    return output;
}

#endif /* C01C1195_26F4_4B37_9CB1_028BE921A66C */
