#include <iostream>

int main()
{
    double prices[] = 
    {
        6.99, 8.5, 42.9, 105.4, 42, 98.1, 2.39, 1.99, 68.76, 9.99, 33.67, 105, 99, 67, 24.56, 0.2, 59.87, 77.2
    };
    double total;
    for(int x = 0; x < 18; x++)
    {
        total += prices[x];
    }
    std::cout << total << std::endl;
}