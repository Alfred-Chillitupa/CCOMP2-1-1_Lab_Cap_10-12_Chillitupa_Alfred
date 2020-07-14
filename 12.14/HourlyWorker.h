#ifndef _HOURLY_WORKER_
#define _HOURLY_WORKER_

    #include <string>
    #include "Employee.h"

    class HourlyWorker: public Employee
    {
    private:
        //Variables
        double wage;
        double hours;

    public:
        //Constructor /Destructor
        HourlyWorker(const std::string&, const std::string&,
        const std::string&, int, int, int, double, double);
    
        virtual ~HourlyWorker() = default;

        //Member Functions 
        
        //Setters
        void setWage(double);
        void setHours(double);


        //Getters
        double getWage() const;
        double getHours() const;


        //VirtualFunctions /Override
        virtual double earnings() const override;
        virtual std::string toString() const override;
    };

#endif // !_HOURLY_WORKER_
