#include "6_1.h"

CompanyEmployee::CompanyEmployee() : position("")
{
    std::cout << "Default constructor called." << std::endl;
}

CompanyEmployee::CompanyEmployee(const std::string& surname, double salary, int birthYear, const std::string& position)
    : Employee(surname, salary, birthYear), position(position)
{
    std::cout << "Initialization constructor called." << std::endl;
}

CompanyEmployee::CompanyEmployee(const CompanyEmployee& other)
    : Employee(other), position(other.position)
{
    std::cout << "Copy constructor called." << std::endl;
}

CompanyEmployee::~CompanyEmployee()
{
    std::cout << "Destructor called. Object destroyed." << std::endl;
}

void CompanyEmployee::increaseSalaryForProgrammers()
{
    if (position == "programmer")
        salary *= 1.2;
}

std::string toString() override
{
    return Employee::toString() + ", Position: " + position;
}

friend std::istream& CompanyEmployee::operator>>(std::istream& input, CompanyEmployee& employee)
{
    input >> Employee::surname >> Employee::salary >> Employee::birthYear >> employee.position;
    return input;
}

friend std::ostream& CompanyEmployee::operator<<(std::ostream& output, const CompanyEmployee& employee)
{
    output << employee.toString();
    return output;
}
