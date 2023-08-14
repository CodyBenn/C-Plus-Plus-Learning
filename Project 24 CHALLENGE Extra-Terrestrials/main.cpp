#include <iostream>
#include <algorithm>

/*
PROBLEM
You meet a group of aliens, and their language is just like Egnlish except that they say every word backwards.
How will you learn to communicate with them?

TASK
Take a word in English that you would like to say, and turn it into language that these aliens will understand.
Input format:
A string word in English
Output format: 
A string the the reversed word that represents the original word translated into alien language.

EXAMPLE
Input:
howdy
Output:
ydwoh
*/

int main()
{
    std::string alien;
    std::cin >> alien;
    
    reverse(alien.begin(), alien.end());
    std::cout << alien << std::endl;
    
    return 0;
}