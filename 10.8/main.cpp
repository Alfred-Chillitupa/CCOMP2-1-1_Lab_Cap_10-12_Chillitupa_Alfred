#include "MotorVehicle.h"

int main(){
    MotorVehicle alfa("Make", "Blue", "B", 2018, 10);
    MotorVehicle beta("Make", "Green", "A", 2015, 24);
    MotorVehicle gamma("Make", "Blue", "B", 2018, 10);
    MotorVehicle omega;
    

    cout << boolalpha << "Alfa and Beta are equal?: " <<  (alfa == beta) << endl;
    cout << "Alfa and Gamma are equal?: " << (alfa == gamma) << endl;
    cout << "Alfa and Beta are not equal?: " << (alfa != beta) << endl;
    cout << "Alfa and Gamma are not equal?: " << (alfa !=gamma) << endl;
    cout << "Alfa is greater than Beta?: " << (alfa > beta) << endl;
    cout << "Beta is greater than Alfa?: " <<(beta > alfa) << endl;
    
    cout << endl;
    cout << beta << endl;
    cout << endl;
    cout << omega << endl;

    return 0;
}