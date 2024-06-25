#include "t5_1.h"

Employee::Employee(const std::string& name, double salary, int birth_year)
    : name(name), salary(salary), birth_year(birth_year) {}
    
int Employee::calculate_age() {
    return 2024 - this->birth_year;
}

int Employee::days_until_50() {
    return 50 - this.calculate_age();
}