#include <iostream>

    /* 
    PROBLEM
    You have a box of popsicles and you want to give them all away to a group of brothers and sisters.
    If you ahve enoughleft in the box to give them each an even amount you should go for it!
    If not, they will fight over them, and you should eat them youself.

    TASK
    Given the number of siblings that you are giving popsicles to, determine if you can give them each
    an even amount or if you shouldn't mention the popsicles at all.

    EXAMPLE
    Sample Input: 3 9
    Sample Output: give away | eat them youself
    */

int main()
{
    int siblings, popsicles;
    std::cin >> siblings >> popsicles;
    
    //Enter code here
    int result;
    result = siblings % popsicles;

    if(result >= 1)
    {
        std::cout << "give away" << std::endl;
    }
    else
    {
        std::cout << "eath them yourself" << std::endl;
    }

    return 0;
}


    /*
    SHOULD RESULT IN
    Input
    2
    5

    Output
    eat them youself

    Input
    10
    20

    Output
    give away
    */