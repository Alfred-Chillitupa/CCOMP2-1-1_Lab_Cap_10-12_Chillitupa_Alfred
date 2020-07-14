// Fig. 12.17: fig12_17.cpp
// Processing Employee derived-class objects with static binding
// then polymorphically using dynamic binding.
#include <iostream>
#include <iomanip>
#include <vector>

#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

void virtualViaPointer(const Employee* const); // prototype
void virtualViaReference(const Employee&); // prototype

int main() {
    cout << fixed << setprecision(2); // set floating-point formatting

    Date currentDate(7, 13, 2020);

    // create derived-class objects
    SalariedEmployee salariedEmployee{
    "John", "Smith", "111-11-1111", 1, 19,2002, 800};
    CommissionEmployee commissionEmployee{
    "Sue", "Jones", "333-33-3333", 5, 20, 2004, 10000, .06};
    BasePlusCommissionEmployee basePlusCommissionEmployee{
    "Bob", "Lewis", "444-44-4444", 7, 24, 2012, 5000, .04, 300};

    // Vector of Employee pointers
    vector<Employee*> employees{&salariedEmployee, &commissionEmployee,
        &basePlusCommissionEmployee};



    cout << "EMPLOYEES PROCESSED POLYMORPHICALLY VIA DYNAMIC BINDING\n\n";

 // call virtualViaPointer to print each Employee's information
 // and earnings using dynamic binding
    cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS POINTERS\n";

    for (const Employee* employeePtr : employees) {
        virtualViaPointer(employeePtr);
        if(employeePtr->getBirthDate().getMonth() == currentDate.getMonth()){
            
            cout << "Happy Birthday!!! " << employeePtr->getFirstName() << "\n"
                << "You have an extra bonus $100.0 !!Congratulations!!" << "\n"
                << "New earnings: $" << (employeePtr->earnings() + 100.0)<< endl;
        }

        cout << endl;
    }
    

 // call virtualViaReference to print each Employee's information
 // and earnings using dynamic binding
    cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS REFERENCES\n";

    for (const Employee* employeePtr : employees) {
        virtualViaReference(*employeePtr); // note dereferencing

        if(employeePtr->getBirthDate().getMonth() == currentDate.getMonth()){
            cout << "Happy Birthday!!! " << employeePtr->getFirstName() << "\n"
                << "You have an extra bonus $100.0 !!Congratulations!!" << "\n"
                << "New earnings: $" << (employeePtr->earnings() + 100.0)<< endl;
        }

        cout << endl;
        
    }
}

 // call Employee virtual functions toString and earnings off a
 // base-class pointer using dynamic binding
void virtualViaPointer(const Employee* const baseClassPtr) {
    cout << baseClassPtr->toString()
        << "\nearned $" << baseClassPtr->earnings() << "\n\n";
}
// call Employee virtual functions toString and earnings off a
// base-class reference using dynamic binding
void virtualViaReference(const Employee& baseClassRef) {
cout << baseClassRef.toString()
    << "\nearned $" << baseClassRef.earnings() << "\n\n";
} 