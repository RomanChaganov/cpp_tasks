#ifndef T5_1_H
#define T5_1_H

class Employee
{
private:
    std::string name;
    double salary;
    int birth_year;
    
public:
    Employee(const std::string& name, double salary, int birth_year);
    
    int calculate_age();
    
    int days_until_50();
}

#endif