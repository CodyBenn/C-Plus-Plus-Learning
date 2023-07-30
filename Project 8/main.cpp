#include <iostream>

int main()
{
    //Lets learn about switches, "choice"
    int choice;
    std::cin >> choice;
    switch(choice)
    {
        case 1:
            std::cout << "Coffee";
            break;
        case 2:
            std::cout << "Tea";
            break;
        case 3 :
            std::cout << "Soda";
            break;
        default:
            std::cout << "Please pick 1 - 3.";
    }
}