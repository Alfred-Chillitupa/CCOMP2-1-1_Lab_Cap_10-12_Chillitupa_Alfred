#include <iomanip>
#include <stdexcept>
#include <sstream>

#include "PieceWorker.h"

using namespace std;

//Constructor

PieceWorker::PieceWorker(const std::string& first, const std::string& last,
        const std::string& ssn,
        int month, int day, int year, 
        double wage, int pieces)
        : Employee(first, last, ssn, month, day, year)
        {
            setWage(wage);
            setPieces(pieces);
        }

//Member Functions
//Setters
void PieceWorker::setWage(double wage)
{
    if (wage < 0.0) {
        throw invalid_argument("Wage must be >= 0.0");
    }
    this->wage = wage;
}

void PieceWorker::setPieces(int pieces)
{
    if (pieces < 0) {
        throw invalid_argument("Pieces must be > 0");
    }
    this->pieces = pieces;
}

//Getters
double PieceWorker::getWage() const
{
    return this->wage;
}
int PieceWorker::getPieces() const
{
    return this->pieces;
}

//Virtual Functions /Override
double PieceWorker::earnings() const
{
    return getWage() * getPieces();
}

string PieceWorker::toString() const 
{
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Salary of PieceWorker Employee: "
        << Employee::toString() <<"\n"
        << "Wage per Piece: " << getWage() << " || "
        << "Pieces Produced: " <<  getPieces();
        
    return output.str();
}