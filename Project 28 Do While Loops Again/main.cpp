#include <iostream>

int main()
{
    const int COUNT{10};
    size_t i{0};

    do
    {
        std::cout << i << " : I love C++" << std::endl; //Iterator declaration

        ++i; //Incrementation
    }
    while(i < COUNT);
    
    std::cout << "Loop is finished" << std::endl;

    return 0;
}