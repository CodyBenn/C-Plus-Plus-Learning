#include <iostream>

int main()
{
    //Doesn't allow modification 
    const char* message {"Hello World!"};
    std::cout << "message : " << message << std::endl;

    //*message = "B"; //Compiler error
    //If users attempt to change the value it wont work
    std::cout << "*message : " << *message << std::endl;

    //Allow users to modify string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;

    return 0;
}