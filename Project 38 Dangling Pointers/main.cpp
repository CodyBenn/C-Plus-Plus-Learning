#include <iostream>

int main()
{
    /*
    //Case1 : Uninitialized pointer
    int *p_number; // Dangling uninitialized pointer

    std::cout << std::endl;
    std::cout << "Case 1 : Uninitialized pointer : ." << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl;
    */

    //Case 2 : Deleted pointer
    std::cout << std::endl;
    std::cout << "Case 2 : Deleted pointer" << std::endl;
    int *p_number1 {new int {67}};

    std::cout << "p_number1 (before delete) : " << *p_number1 << std::endl;
    
    delete p_number1;

    std::cout << "*p_number1 (after delete) : " << *p_number1 << std::endl;

    //Case 3 : Multiple pointers pointing to the same address
    std::cout << std::endl;
    std::cout << "Case 3 : Multple pointers pointing to the same address : " << std::endl;

    int *p_number3 {new int {83}};
    int *p_number4 {p_number3};

    std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
    std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;

    //Deleting p_number3
    delete p_number3;

    //p_number4 points to deleted memory. Dereferencing it will lead to
    //undefined behaviour : Crash / Garbage or w/e.
    std::cout << "p_number4(after deleting p_number3) - " << p_number4 << " - " << *p_number4 << std::endl;

    //Solution1 : Initialize your pointers immediately upon declaration
    std::cout << std::endl;
    std::cout << "Solution 1 : " << std::endl;
    int *p_number5{nullptr};
    int *p_number6{new int{56}};

    //Check for nullptr before use
    if(p_number6 != nullptr){
        std::cout << "*p_number6 : " << *p_number6 << std::endl;
    }else{
        std::cout << "Invalid address" << std::endl;
    }

    //Solution 2 :
    //Right after you call delete on a pointer, remember to reset
    //the pointer to nullptr to make it CLEAR it doesnt point anywhere

    std::cout << std::endl;
    std::cout << "Solution 2 : " << std::endl;
    int *p_number7{new int {82}};

    //Use the pointer however you want
    std::cout << "p_number 7 : " << p_number7 << " - " << *p_number7 << std::endl;

    delete p_number7;
    p_number7 = nullptr; //Reset the pointer

    //Check for nullptr before use
    if(p_number7 != nullptr){
        std::cout << "*p_number7 : " << *p_number7 << std::endl;
    }else{
        
    }


    std::cout << "Program is ending well." << std::endl;

    return 0;
}