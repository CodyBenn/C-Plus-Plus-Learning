#include <iostream>

int main()
{
    bool red_light {true};
    bool green_light {false};

    if (red_light == true)
    {
        std::cout << "Stop!" << std::endl;
    }
    else
    {
        std::cout << "Go through!" << std::endl;
    }  

    if(green_light);
    {
        std::cout << "Light is green!" << std::endl;
    }
    else
    {
        std::cout << "The light is NOT green" << std::endl;
    }

    return 0;
}