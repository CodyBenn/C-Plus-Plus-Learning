#include <iostream>

int main()
{
    //Braced Initializers
    int elephant_count; //Variable may contain random garbage value.
    int lion_count{};   //Initialize to 0
    int dog_count{10};  //Initialize to 10
    int cat_count{15};  //Initialize to 15

    //Can use expression as initializer
    int domesticated_animals {dog_count + cat_count};

    //int new_number {doesnt_exist};
    //int narrowing_conversion{2.9};

    std::cout << "Elephant count: " << elephant_count << std::endl;
    std::cout << "Lion count: " << lion_count << std::endl;
    std::cout << "Dog count: " << dog_count << std::endl;
    std::cout << "Cat count: " << cat_count << std::endl;
    std::cout << "Domesticated animal count: " << domesticated_animals << std::endl;

    return 0;
}