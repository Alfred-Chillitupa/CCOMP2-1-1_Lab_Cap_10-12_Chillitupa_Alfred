#include "MotorVehicle.h"

//Constructor

MotorVehicle::MotorVehicle(string make, string color, string fuelType,
                            int yearOfManufacture, int engineCapacity){

    this->setMake(make);
    this->setColor(color);
    this->setFuelType(fuelType);
    this->setYearOfManufacture(yearOfManufacture);
    this->setEngineCapacity(engineCapacity);
}

//Functions /Setters
    void MotorVehicle::setMake(string make)
    {
        this->make = make;
    }
    void MotorVehicle::setColor(string color)
    {
        this->color = color;
    }
    void MotorVehicle::setFuelType(string fuelType)
    {
        this->fuelType = fuelType;
    }
    void MotorVehicle::setYearOfManufacture(int yearOfManufacture)
    {
        this->yearOfManufacture = yearOfManufacture;
    }
    void MotorVehicle::setEngineCapacity(int engineCapacity)
    {
        this->engineCapacity = engineCapacity;
    }

//Functions /Getters
    string MotorVehicle::getMake() const
    {
        return this->make;
    }
    string MotorVehicle::getColor() const
    {
        return this->color;
    }
    string MotorVehicle::getFuelType() const
    {
        return this->fuelType;
    }
    int MotorVehicle::getYearOfManufacture() const
    {
        return this->yearOfManufacture;
    }
    int MotorVehicle::getEngineCapacity() const
    {
        return this->engineCapacity;
    }

    string MotorVehicle::displayCarDetails() const
    {
        ostringstream output;

        output  << "Make: " << this->make << "\n"
                << "Color: " << this->color << "\n"
                << "FuelType: " << this->fuelType << "\n"
                << "YearOfManufacture: " << this->yearOfManufacture << "\n"
                << "EngineCapacity: " << this->engineCapacity << "\n";
        return output.str();
    }

//Overloaded Operators

bool operator==(const MotorVehicle& mV1, const MotorVehicle& mV2){
    return  mV1.getMake() == mV2.getMake() &&
            mV1.getColor() == mV2.getColor() &&
            mV1.getFuelType() == mV2.getFuelType() &&
            mV1.getYearOfManufacture() == mV2.getYearOfManufacture() &&
            mV1.getEngineCapacity() == mV2.getEngineCapacity();
}

bool operator!=(const MotorVehicle& mV1, const MotorVehicle& mV2){
    return !(mV1 == mV2);
}

bool operator>(const MotorVehicle& mV1, const MotorVehicle& mV2){
    return  mV1.getYearOfManufacture() < mV2.getYearOfManufacture()? true : false;
}

ostream& operator<<(ostream& output1, const MotorVehicle& mV){
    return  output1  << "Make: " << mV.getMake() << "\n"
                << "Color: " << mV.getColor() << "\n"
                << "FuelType: " << mV.getFuelType() << "\n"
                << "YearOfManufacture: " << mV.getYearOfManufacture() << "\n"
                << "EngineCapacity: " << mV.getEngineCapacity() << "\n";
}