#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    
    int* nums = new int [n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> nums[i];
    }

    int max = nums[0];
    for(int i = 0; i < n; i++)
    {
        if(nums[i] > max)
            max = nums[i];
    }
    std::cout << max << std::endl;
    
    return 0;
}