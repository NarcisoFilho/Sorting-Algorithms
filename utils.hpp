#ifndef A6B2CA84_A131_47BB_AFE0_03BC8A643F12
#define A6B2CA84_A131_47BB_AFE0_03BC8A643F12

#include <iostream>
#include <vector>
#include <iterator>

void print(std::vector<int> &elements, std::string delimiter = " "){
    std::copy(elements.begin(),elements.end(), std::ostream_iterator<int>(std::cout, delimiter.c_str()));
    std::cout << std::endl;
}

#endif /* A6B2CA84_A131_47BB_AFE0_03BC8A643F12 */
