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

    /*

    //Will probably print garbage after your char array
    std::cout << "message : " << message << std::endl;
    */

    //If a character array is null terminated, it is called as C-String
    char message1[] {'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message1 : " << message1 << std::endl;

    char message2[6] {'H', 'e', 'l', 'l', 'o'};
    std::cout << "message2 : " << message2 << std::endl;

    return 0;
}