#include <iostream>

/*
Scenario
Playground Tickets
You are making an app to control the entrance of a playground and 
output the ticket category based on the age of the customer.
There are 3 categories of tickets:
Free: Age 0-3 get free tickets.
Discounted: Age 4-6 get discounted tickets.
Normal: Age 7+ get a normal ticket.

Task
Take the age of the customer as input, then output the 
ticket category corresponding to that age.

Example
Input : 
5
Output :
Discounted
*/

int main()
{
    int age;
    std::cin >> age;
    {
        if(age <= 3)
        {
            std::cout << "Free";
        }
        else if(age <= 6)
        {
            std::cout << "Discounted";
        }
        else if(age >= 7)
        {
            std::cout << "Normal";
        }
    }   
}