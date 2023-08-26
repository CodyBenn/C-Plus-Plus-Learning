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
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;

    char message2[6] {'H', 'e', 'l', 'l', 'o'};
    std::cout << "message2 : " << message2 << std::endl;
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;

    //This is not a C-String, as there is no Null Character, '\0'
    char message3[] {'H', 'e', 'l', 'l', 'o'};
    std::cout << "message3 : " << message3 << std::endl;
    std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl;
 
    //String Literal, the most commonly used
    char message4[] {"Hello World, how are you doing!"};
    std::cout << "message4 : " << message4 << std::endl;
    std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;

    //Cant safely print out arrays other than those of characters
    int numbers[] {1, 2, 3, 4, 5};
    std::cout << "numbers : " << numbers << std::endl;


    return 0;
}