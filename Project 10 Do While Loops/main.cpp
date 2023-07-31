#include <iostream>
/*
TASK
Create a timer program that will take the number
of seconds as input, and countdown to 0.
*/
int main()

{
    int number;
    std::cin >> number;

    do
    {
        std::cout << number << std::endl;
        number--;
    }
    while(number >= 0);
    return 0;
}