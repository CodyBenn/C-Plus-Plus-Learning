#include <iostream>

int main()
{
    //Case1 : Uninitialized pointer
    int *p_number; // Dangling uninitialized pointer

    std::cout << std::endl;
    std::cout << "Case 1 : Uninitialized pointer : ." << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl;
    
    return 0;
}