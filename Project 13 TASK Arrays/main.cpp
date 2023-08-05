#include <iostream>

    /*
    Alphabet

    The given code delcares an array that holds the letters of the English alphabet
    TASK
    Take a number as input and output the letter from the array that corresponds to that index
    */

int main()
{
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    int number;
    std::cin >> number;
    std::cout << letters[number] << std::endl;

}