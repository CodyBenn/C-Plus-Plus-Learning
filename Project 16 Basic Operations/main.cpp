#include <iostream>

int main()
{
     //Addition
    int number1{2};
    int number2{7};

    int result = number1 + number2;
    std::cout << "Result of Addition : " << result << std::endl;

    //Subtraction
    result = number2 - number1;
    std::cout << "Result of Subtraction : " << result << std::endl;

    result = number1 - number2;
    std::cout << "Result of Subtraction : " << result << std::endl;

    //Multiplication
    result = number1 * number2;
    std::cout << "Result of Multiplication : " << result << std::endl;
    
    //Division 
    result = number2 / number1;
    std::cout << "Result of Division : " << result << std::endl;

    //Modulus (Remainder)
    result = number2 % number1;
    std::cout << "Result of Modulus : " << result << std::endl;

    result = 31 % 10;
    std::cout << "Result of Modulus : " << result << std::endl;
    
    return 0;
}