#include <iostream>

int main()
{
    //These are some examples of std:: commands.

    //std::cout is used to print to the console.
    std::cout <<"Hello world!" << std::endl;
    
    std::cout << "The number is : " << 12 << std::endl;

    int age {28};
    std::cout << "The age is : " << age << std::endl;

    //std::cerr is used to print errors to the console.
    std::cerr << "std::cerr output : Something went wrong" << std::endl;

    //std::clog is used to print logs to the console.
    std::clog << "std::clog output : This is a log message" << std::endl;

    std::cout << "---------------" << std::endl;
    
    //Lets try an input console command
    //Below we'll assign variables for later
    int age2;
    std::string name;

    //Using this code we have the user print the information needed.
    std::cout << "Please type in your full name here : " << std::endl;
    std::getline(std::cin, name);

    std::cout << "Please type in your age here : " << std::endl;
    std::cin >> age2;

    //Here we combine the two to have the console ask for input, and assign the keyed data as the printed output.
    std::cout << "Hello " << name << "! You are " << age2 << " years old." << std::endl;
    
}