// Fig. 12.9: Employee.h
// Employee abstract base class.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> // C++ standard string class

#include "Date.h"

class Employee {
    public:
        Employee(const std::string&, const std::string&, const std::string&, int, int, int);
        virtual ~Employee() = default; // compiler generates virtual destructor

        void setFirstName(const std::string&); // set first name
        std::string getFirstName() const; // return first name

        void setLastName(const std::string&); // set last name
        std::string getLastName() const; // return last name

        void setSocialSecurityNumber(const std::string&); // set SSN
        std::string getSocialSecurityNumber() const; // return SSN

        void setBirthDate(int, int, int); //Set Birthday  MM-DD-YY
        Date getBirthDate() const; //Return Birthday MM-DD-YY

        // pure virtual function makes Employee an abstract base class
        virtual double earnings() const = 0; // pure virtual
        virtual std::string toString() const; // virtual 

    private:
        std::string firstName;
        std::string lastName;
        std::string socialSecurityNumber;
        Date birthDate;
};

#endif // EMPLOYEE_H