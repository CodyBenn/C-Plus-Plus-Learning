#include <iostream>

//Statement below allows std:: commands to not need std:: anymore
using namespace std;

int main()
{
    int number1 = 15; //Decimal
    int number2 = 017; //Octal
    int number3 = 0x0F; //Hexadecimal
    int number4 = 0b00001111; //Binary

    cout << "number1 : " << number1 << endl;
    cout << "number2 : " << number2 << endl;
    std::cout << "number3 : " << number3 << std::endl;
    std::cout << "number4 : " << number4 << std::endl;

    return 0;
}