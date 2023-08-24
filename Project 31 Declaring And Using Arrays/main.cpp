#include <iostream>

int main()
{
    //Declare an array of ints

    int scores[10]; //Junk data, prints a random number.

    /*
    //Read data
    std::cout << " scores [0] : " << scores[0] << std::endl;
    std::cout << " scores [0] : " << scores[1] << std::endl;
    */

    /*
    //Read with a loop
    for (size_t i {0}; i < 10; ++i) {
       std::cout << "scores [" << i << "] : " << scores [i] << std::endl;
    }
    */

   /*
    //Write data into an array
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    //Print the data out
    for (size_t i {0}; i < 10; ++i) {
        std::cout << "scores [" << i << "] : " << scores [i] << std::endl;
    }
    */

    /*
    for(size_t i{0}; i < 10; ++i){
        scores[i] = i * 10;
    }

    //Print the data out
    for (size_t i {0}; i < 10; ++i) {
        std::cout << "scores [" << i << "] : " << scores [i] << std::endl;
    }
    */

    //Declare and initialize at the same time

    double salaries [5] {12.7, 7.5, 13.2, 8.1, 9.3};

    for(size_t i {0}; i < 5; ++i){
        std::cout << "salary [" << i << "] : " << salaries [i] << std::endl;
    }
    return 0;
}