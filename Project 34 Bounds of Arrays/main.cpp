#include <iostream>

int main()
{
    int numbers [] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    //Read beyond bounds : Will read garbage or crash your program
    std::cout << "Program Starting..." << std::endl;
    std::cout << "numbers[12] : " << numbers[12] << std::endl;

    std::cout << "Program 2 Starting..." << std::endl;
    //Write beyong bounds. The copiler allows it. But you don't own
    //the memory at index 12, so other programs may modify it and your
    //program may read bogus data at a later time. Or you can even
    //corrupt the data used by other parts of your program.

    numbers[1299999] = 1000;
    std::cout << "numbers[1299999] : " << numbers[1299999] << std::endl;
    std::cout << "Program ending..." << std::endl; //Wont print because the program crashes

    return 0;
}