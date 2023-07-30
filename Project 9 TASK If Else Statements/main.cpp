#include <iostream>

//CHALLENGE PROBLEM TASK SET GO DO

/*
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
For example, if the user enters 5 as the age,
the output should be "Discounted".
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