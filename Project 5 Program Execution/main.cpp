#include <iostream>

//This program is used as an example to show the order of operations in a program.
int add_numbers(int a, int b)
{
    return a + b;
}

int main()
{
    //
    int a = 10;
    int b = 5;
    int c;
    
    std::cout << "Statement1" << std::endl;
    std::cout << "Statement2" << std::endl;
    c = add_numbers(a, b);
    std::cout << "Statement3" << std::endl;
    std::cout << "Statement4" << std::endl;

    return 0;
}