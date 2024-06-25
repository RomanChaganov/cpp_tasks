#include <iostream>

#include "t1_2.h"
#include "t2_2.h"


void task1_2()
{
    std::cout << "\n<< Task 1.2 >>" << std::endl;
    
    int size = 0;
    std::cout << "N = ";
    std::cin >> size;
    
    int* arr = new int[size];
    
    std::cout << "Enter " << size << " binaries:" << std::endl;
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];
    
    std::cout << std::endl;
    
    swap_binary(arr, size);
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << std::endl;
}

void task2_2()
{
    std::cout << "\n<< Task 2.2 >>" << std::endl;
    
    int n = 0;
    std::cout << "N = ";
    std::cin >> n;
    
    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
        arr[i] = new int[n];
    
    std::cout << std::endl;
    
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter " << (i + 1) << " line (" << n << " elements)\n";
        for (int j = 0; j < n; j++)
            std::cin >> arr[i][j];
    }
    
    std::cout << "\nIs simmetric? ";
    bool is_sim = is_simmetric(arr, n);
    if (is_sim == true)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
}

int main()
{
    std::cout << "\nChoose a task:" << std::endl;
    std::cout << "2. Task 1.2" << std::endl;
    std::cout << "5. Task 2.2" << std::endl;
    
    int task = 0;
    std::cin >> task;
    
    switch (task)
    {
        case 2:
            task1_2();
            break;
        case 5:
            task2_2();
            break;
        default:
            std::cout << "Good Bye!" << std::endl;
            return 0;
    }
    
    return 0;
}