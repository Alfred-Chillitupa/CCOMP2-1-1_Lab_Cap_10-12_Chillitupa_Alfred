#ifndef _PIECE_WORKER_H
#define _PIECE_WORKER_H

    #include <string>
    #include "Employee.h"

    class PieceWorker: public Employee
    {
    private:
        //Variables
        double wage;
        int pieces;

    public:
        //Constructor /Destructor
        PieceWorker(const std::string&, const std::string&,
        const std::string&, int, int, int, double, int);
    
        virtual ~PieceWorker() = default;

        //Member Functions 
        
        //Setters
        void setWage(double);
        void setPieces(int);


        //Getters
        double getWage() const;
        int getPieces() const;

        //VirtualFunctions /Override
        virtual double earnings() const override;
        virtual std::string toString() const override;
    };

#endif // !_PIECE_WORKER_H
