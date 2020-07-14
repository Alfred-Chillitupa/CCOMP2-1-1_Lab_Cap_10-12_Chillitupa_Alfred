#include <iomanip>
#include <stdexcept>
#include <sstream>

#include "HourlyWorker.h"

using namespace std;

//Constructor

HourlyWorker::HourlyWorker(const std::string& first, const std::string& last,
        const std::string& ssn,
        int month, int day, int year, 
        double wage, double hours)
        : Employee(first, last, ssn, month, day, year)
        {
            setWage(wage);
            setHours(hours);
        }

//Member Functions
//Setters
void HourlyWorker::setWage(double wage)
{
    if (wage < 0.0) {
        throw invalid_argument("Wage must be >= 0.0");
    }
    this->wage = wage;
}

void HourlyWorker::setHours(double hours)
{
    if (hours < 0.0 && hours< 168.0) { //168 total hours of the week
        throw invalid_argument("hours must be > 0");
    }
    this->hours = hours;
}

//Getters
double HourlyWorker::getWage() const
{
    return this->wage;
}
double HourlyWorker::getHours() const
{
    return this->hours;
}

//Virtual Functions /Override
double HourlyWorker::earnings() const
{
    if(getHours()>40){
        return (40*getWage() + (getWage() * 1.5 * (getHours() - 40)));
    }else{
        return getWage() * getHours();
    }
    
}

string HourlyWorker::toString() const 
{
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Salary of HourlyWorker Employee: "
        << Employee::toString() <<"\n"
        << "Wage per Hours: " << getWage() << " || "
        << "Hours Worked: " <<  getHours() << " || "
        << "Aditional Hours Worked; " << (getHours()>40?getHours()-40:0);
        
    return output.str();
}