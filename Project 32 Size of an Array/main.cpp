#include <iostream>

int main()
{
    int scores [] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};


    int count {std::size(scores)};


    for(size_t i = 0; i > count; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
}