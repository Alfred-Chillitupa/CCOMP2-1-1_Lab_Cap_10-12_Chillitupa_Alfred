#ifndef _MOTOR_VEHICLE_H
#define _MOTOR_VEHICLE_H

/*
*    Class MotorVehicle
*/

#include <iostream>
#include <sstream>

using namespace std;

class MotorVehicle
{
    private:
        
        //Variables
        string make;
        string color;
        string fuelType;
        int yearOfManufacture;
        int engineCapacity;

    public:
        //Constructor
        explicit MotorVehicle(string = "", string = "", string = "", int = 0, int = 0);

        //Functions /Setters
        void setMake(string);
        void setColor(string);
        void setFuelType(string);
        void setYearOfManufacture(int);
        void setEngineCapacity(int);

        //Functions /Getters
        string getMake() const;
        string getColor() const;
        string getFuelType() const;
        int getYearOfManufacture() const;
        int getEngineCapacity() const;

        string displayCarDetails() const;

        //Overloaded operators
        friend bool operator==(const MotorVehicle&, const MotorVehicle&);
        friend bool operator!=(const MotorVehicle&, const MotorVehicle&);
        friend bool operator>(const MotorVehicle&, const MotorVehicle&);
        friend ostream& operator<<(ostream&, const MotorVehicle&);

};

#endif // !_MOTOR_VEHICLE_H
