#include "5_1.h"

Employee::Employee() : surname(""), salary(0.0), birthYear(0)
{
    std::cout << "Default constructor called." << std::endl;
}

Employee::Employee(const std::string& surname, double salary, int birthYear)
    : surname(surname), salary(salary), birthYear(birthYear)
{
    std::cout << "Initialization constructor called." << std::endl;
}

Employee::Employee(const Employee& other)
    : surname(surname), salary(salary), birthYear(birthYear)
{
    std::cout << "Copy constructor called." << std::endl;
}

Employee::~Employee()
{
    std::cout << "Destructor called. Object destroyed." << std::endl;
}

int Employee::calculateAge()
{
    return 2024 - birthYear;
}

int Employee::calculateDaysUntil50thBirthday()
{
    return (50 - calculateAge()) * 365;
}

std::string Employee::toString()
{
    return "Employee: " + surname + ", Salary: " + std::to_string(salary) + ", Age: " + std::to_string(calculateAge());
}

Employee::Employee& operator=(const Employee& other)
{
    if (this != &other)
    {
        surname = other.surname;
        salary = other.salary;
        birthYear = other.birthYear;
    }
    return *this;
}

bool Employee::operator==(const Employee& other)
{
    return surname == other.surname && salary == other.salary && birthYear == other.birthYear;
}

friend std::istream& Employee::operator>>(std::istream& input, Employee& employee)
{
    input >> employee.surname >> employee.salary >> employee.birthYear;
    return input;
}

friend std::ostream& Employee::operator<<(std::ostream& output, const Employee& employee)
{
    output << employee.toString();
    return output;
}