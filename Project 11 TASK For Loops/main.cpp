#include <iostream>

    /*
    Create an app that calculates the sum of numbers 1 to N, where N is taken from input.
    For example 1+2+3+4+5=15.
    */

int main()
{
    int n;
    std::cin >> n;
    int sum = 0;

    for (int x = 1; x <= n; x++)
    {
        sum+=x;
    } 
    std::cout << sum << std::endl;
}