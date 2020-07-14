// HugeInteger class definition.
#ifndef HugeInteger_H
#define HugeInteger_H

#include <array>
#include <iostream>
#include <string>

class HugeInteger {
    friend std::ostream& operator<<(std::ostream&, const HugeInteger&);
    public:
        static const int digits{40}; // maximum digits in a HugeInteger
        HugeInteger(long = 0); // conversion/default constructor
        HugeInteger(const std::string&); // conversion constructor
        
        // addition operator; HugeInteger + HugeInteger
        HugeInteger operator+(const HugeInteger&) const;
        // addition operator; HugeInteger + int
        HugeInteger operator+(int) const;
        // addition operator;
        // HugeInteger + string that represents large integer value
        HugeInteger operator+(const std::string&) const;

        //Overload
        HugeInteger operator*(const HugeInteger&) const;
        HugeInteger operator*(int) const;
        HugeInteger operator*(const std::string&) const;

        HugeInteger operator/(const HugeInteger&) const;
        HugeInteger operator/(int) const;
        HugeInteger operator/(const std::string&) const;

        //Relational and equality operators
        friend bool operator==(const HugeInteger&, const HugeInteger&);
        friend bool operator==(const HugeInteger&, int);
        friend bool operator==(const HugeInteger&, const std::string);

        friend bool operator!=(const HugeInteger&, const HugeInteger &);
        friend bool operator!=(const HugeInteger&, int);
        friend bool operator!=(const HugeInteger&, const std::string);
        
        friend bool operator>(const HugeInteger&, const HugeInteger&);
        friend bool operator>(const HugeInteger&, int);
        friend bool operator>(const HugeInteger&, const std::string);

        friend bool operator<(const HugeInteger&, const HugeInteger&);
        friend bool operator<(const HugeInteger&, int);
        friend bool operator<(const HugeInteger&, const std::string);

        friend bool operator>=(const HugeInteger&, const HugeInteger&);
        friend bool operator>=(const HugeInteger &, int);
        friend bool operator>=(const HugeInteger &, const std::string);

        friend bool operator<=(const HugeInteger&, const HugeInteger&);
        friend bool operator<=(const HugeInteger &, int);
        friend bool operator<=(const HugeInteger &, const std::string);

        //Aditional function
        bool isEmpty() const;

    private:
        std::array<short, digits> integer{}; // default init to 0s
        
};
#endif