#include <iostream>

//Functions are created from assigning statements or variables with inputs to print
//An output that can be called upon whenever needed and are reusable.

//Let's assign a Function we can call upon anywhere in our code.
int addNumbers(int first_param, int second_param)
{
    int result = first_param + second_param;
    return result;
}

//Bonus round! Let's make a multiplication Function too!
int multiplyNumbers(int first_multi, int second_multi)
{
    int result = first_multi * second_multi;
    return result;
}

int main()
{
    //Below here we'll have a couple Statements assigning Variables for later.
    int first_number{13}; //Assigns 13
    int second_number{7}; //Assigns 7

    //Now lets create Statements to print the numbers to the console.
    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << second_number << std::endl;
    
    //Here we'll have our first Function to Input our Variables together and give us our Output "Sum".
    int sum = first_number + second_number;

    //Lastly we'll print the Sum to the console.
     //Prints "Sum" which equals 20
    std::cout << "Sum of the numbers : " << sum << std::endl; 
   

    //Extra lesson: Calling the Function at the start, without all the previous lines!
    //Prints "Sum" of "addNumbers", 25 + 7, 32.
    sum = addNumbers(25, 7);
    std::cout << "Sum of the numbers : " << sum << std::endl; 

    //One more for reassurance, lets add 420 + 69! :)
    //Prints "Sum" of "addNumbers", 420 + 69, 489.
    sum = addNumbers(420, 69);
    std::cout << "Sum of the numbers : " << sum << std::endl; 

    //Lets cut that down to one single line ok?
    //Prints "Sum" of "addNumbers", 4 + 9, 13.
    std::cout << "Sum of the numbers : " << addNumbers(4,9) << std::endl;

    //Can we multiply that in one line too? Hopefully.
    std::cout << "Sum of the multiplied numbers : " << multiplyNumbers(5,5) << std::endl;
    //ez

    return 0;
}