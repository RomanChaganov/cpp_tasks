#ifndef 5_1_H
#define 5_1_H

#include <iostream>
#include <string>
#include <stdexcept>

class Employee
{
private:
    std::string surname;
    double salary;
    int birthYear;
    
public:
    Employee();
    
    Employee(const std::string& surname, double salary, int birthYear);
    
    Employee(const Employee& other);
    
    ~Employee();
    
    int calculateAge();
    
    int calculateDaysUntil50thBirthday();
    
    std::string toString();
    
    Employee& operator=(const Employee& other);
    
    bool operator==(const Employee& other);
    
    friend std::istream& operator>>(std::istream& input, Employee& employee);
    
    friend std::ostream& operator<<(std::ostream& output, const Employee& employee);
};

#endif