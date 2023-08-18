#include <iostream>

int main()
{
    //For

    std::cout << "=== FOR LOOPS ===" << std::endl;

    /*
    for(unsigned int i {0}; i < 10; ++i) //Assigns int = i; runs i until it reaches 10 times; adds +1 to i until finished.
    {
        std::cout << i << " : Help, I've fallen" << std::endl; //Prints "Help I've fallen" 10 times.
    }
    std::cout << "Loop is finished" << std::endl;
    */

    /*
    //Use size_t : a representation of some unsigned int for positive numbers [sizes]
    for (size_t i{0}; i < 10; ++i)
    {
        std::cout << i << " : Please, my legs!" << std::endl;
    }
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
    std::cout << "Loop is finished" << std::endl;
    */

    //Scope of the iterator
    /*
    for(size_t i{0}; i < 10; ++i)
    {
    std::cout << i << " : My legs!" << std::endl;
    }
    std::cout << "Loop is finished" << std::endl;
    std::cout << "i : " << i << std::endl; //Compiler Error : i is not in scope
    */

    //Iterator declared outside of the loop
    /*
    size_t i{0}; //Defines Iterator outside of loop
    
    for(i; i < count; ++i)
    {
    std::cout << i << " : My legs!" << std::endl;
    }
    std::cout << "Loop is finished" << std::endl;
    std::cout << "i : " << i << std::endl;
    */
    
    //DONT hardcode values, it's bad.

    const size_t COUNT{1000};
    size_t i{0};
    
    for(i; i < COUNT; ++i)
    {
    std::cout << i << " : My legs!" << std::endl;
    }
    std::cout << "Loop is finished" << std::endl;
    std::cout << "loops using i : " << i << std::endl;

    //==================================================================================================================
    std::cout << "==============================" << std::endl;
    //==================================================================================================================

    return 0;
}
