#ifndef 6_1_H
#define 6_1_H

#include <iostream>
#include <string>
#include <stdexcept>

#include "5_1.h"

class CompanyEmployee : public Employee
{
private:
    std::string position;
    
public:
    CompanyEmployee();
    
    CompanyEmployee(const std::string& surname, double salary, int birthYear, const std::string& position);
    
    CompanyEmployee(const CompanyEmployee& other);
    
    ~CompanyEmployee();
    
    void increaseSalaryForProgrammers();
    
    std::string toString() override;
    
    friend std::istream& operator>>(std::istream& input, CompanyEmployee& employee);
    
    friend std::ostream& operator<<(std::ostream& output, const CompanyEmployee& employee);
};

#endif