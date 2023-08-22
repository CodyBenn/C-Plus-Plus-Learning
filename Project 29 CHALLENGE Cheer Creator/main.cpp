#include <iostream>

    /*
    SCENARIO
    You are cheering on your favorite team. After each play, if your team
    got over 10 yards further down the field, you stand up and give your
    friend a high five. If they don't move forward by at least a yard, you
    stay quiet and say 'shh', and if they move forward 10 yards or less, you
    say 'Ra!' for every yard that they moved forward in that play.

    TASK
    Given the number of yards that your team moved forward, output either 
    'High Five' (for over 10), 'shh' (for < 1), or a string that has a 'Ra!'
    for every yard that they gained.

    EXAMPLE
    Input
    5
    Output
    Ra!Ra!Ra!Ra!Ra!
    */

int main()
{
    int yards;
    std::string ra = "Ra!";
    std::cin >> yards;

    if(yards > 10)
    {
        std::cout << "High Five" << std::endl;
    }
    else if(yards < 1)
    {
        std::cout << "shh" << std::endl;
    }
    else
    {
        for(int i = 0; i < yards; i++)
        std::cout << ra << std::endl;
    }

   return 0;
}