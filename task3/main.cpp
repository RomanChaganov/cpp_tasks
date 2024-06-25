#include <iostream>
#include <cstdio>

#include "t3_1.h"
#include "t4_1.h"

void task3_1()
{
    std::cout << "\n<< Task 3.1 >>" << std::endl;
    
    char str[100];
    std::cout << "Enter string: ";
    fgets(str, 100, stdin);
    
    char* new_str = remove_spaces(str);
    
    std::cout << new_str;
}

void task4_1()
{
    std::cout << "\n<< Task 4.1 >>" << std::endl;
    
    char str[100];
    std::cout << "Enter string: ";
    fgets(str, 100, stdin);
    
    sort_string(str);
    
    std::cout << str;
}

int main()
{   
    std::cout << "\nChoose a task:" << std::endl;
    std::cout << "0. Task 3.1" << std::endl;
    std::cout << "1. Task 4.1\n" << std::endl;
    
    int task = 0;
    (std::cin >> task).get();
    
    switch (task)
    {
        case 0:
            task3_1();
            break;
        case 1:
            task4_1();
            break;
        default:
            std::cout << "Good Bye!" << std::endl;
            return 0;
    }
    
    return 0;
}
