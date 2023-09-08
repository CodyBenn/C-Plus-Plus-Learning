#include <iostream>

int main()
{
    //int * data = new int[100000000000000000];

    /*
    for(size_t i{0}; i < 100000000; ++i){
        int * data = new int[10000000000];
    }
    */

    /*
    //Exception method
    for(size_t i{0}; i < 100; ++i){
        try{
            int * data = new int[10000000000];
        }catch(std::exception& ex){
        std::cout << "Something went wrong : " << ex.what() << std::endl;
        }
    }
    */

    //std::nothrow method
    for(size_t i{0}; i < 100; ++i){
        int *data = new(std::nothrow) int[100000000000];

        if(data != nullptr){
            std::cout << "Data allocated" << std::endl;
        }else{
            std::cout << "Data allocation failed" << std::endl;
        }
    }

    std::cout << "Program is ending well" << std::endl;
    
    return 0;
}