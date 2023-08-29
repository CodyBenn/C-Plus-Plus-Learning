#include <iostream>

int main()
{
    /*
    //Declare and initialize pointer
    int* p_number {}; //Will initialize with nullptr
    double * p_fractional_number{};

    //Explicitly initialize with nullptr
    int* p_number1{nullptr};
    int* p_fractional_number1{nullptr};

    //Pointers to different variables are of the same size
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl;
    std::cout << "sizeof(double*) : " << sizeof(double*) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    std::cout << "sizeof(p_number1) : " << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractionlal_number1) : " << sizeof(p_fractional_number1) << std::endl;

    //It doesn't matter if you put the * close to data type or to variable name
    int* p_number2{nullptr};
    int * p_number3{nullptr};
    int  *p_number4{nullptr};

    int *p_number5{}, other_int_var{};
    int* p_number6{}, other_int_var6{}; //Confusing as you wonder if other_int_var6
                                        //is also a pointer to int. It is not.
                                        //The structure is exactly the same for the
                                        //previous statement.

    std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl;
    std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << std::endl;

    //It is better to seperate these declarations on different lines though
    int *p_number7{};
    int other_int_var7{}; //No room for confusion this time
    */


    //Initializing pointers and assigning them data
    //We know that pointers store addresses of variables
    int int_var{43};
    int *p_int{&int_var}; //The address of operator (&);

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory) : " << p_int << std::endl; 

    //You can also change the address stored in a pointer any time
    std::cout << "p_int (With different address) : " << p_int << std::endl;
    
    return 0;
}