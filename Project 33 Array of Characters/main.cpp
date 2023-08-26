#include <iostream>

int main()
{
    //Declare Array
    char message[5] {'H', 'e', 'l', 'l', 'o'};

    //Print out the array through looping
    for(auto c : message){
        std::cout << c;
    }

    //change characters in our array
    message[1] = 'a';

    //Print out the array through looping
    std::cout << "message : ";
    for(auto c : message){
        std::cout << c;
    }
    std::cout << std::endl;
}