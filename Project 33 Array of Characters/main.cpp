#include <iostream>

int main()
{
    //Declare Array
    char message[5] {'H', 'e', 'l', 'l', 'o'};

    /*
    //Print out the array through looping
    std::cout << "message : ";
    for(auto c : message){
        std::cout << c;
    }
    std::cout << std::endl;

    //change characters in our array
    message[1] = 'a';

    //Print out the array through looping
    std::cout << "message : ";
    for(auto c : message){
        std::cout << c;
    }
    std::cout << std::endl;
    */

    std::cout << "message : " << message << std::endl;

    //If a character array is null terminated, it is called as C-String

    char message1[6] {'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message1 : " << message1 << std::endl;

    return 0;
}