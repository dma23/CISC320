#pragma once

using namespace std;

class Fraction { 
    
    public:
        Fraction();
        Fraction(int);
        Fraction(int, int);
        int gcd(int, int);
        int numerator;
        int denominator;
        
        int getDenominator();
        int getNumerator();
        //Fraction sameBase(Fraction f1, Fraction f2);
        //int gcd(int num1, int num2);
};

Fraction& operator++(const Fraction f);
Fraction operator--(const Fraction f);

Fraction operator+(const Fraction f1, const Fraction f2); // done
Fraction operator-(const Fraction f1); // done
Fraction operator-(const Fraction f1, const Fraction f2); // done
Fraction operator*(const Fraction f1, const Fraction f2); // done
Fraction operator/(const Fraction f1, const Fraction f2); // done
Fraction operator+=(const Fraction f1, const Fraction f2);

bool operator<=(const Fraction f1, const Fraction f2); // done 
bool operator>=(const Fraction f1, const Fraction f2); // done
bool operator<(const Fraction f1, const Fraction f2); // done
bool operator>(const Fraction f1, const Fraction f2); // done
bool operator!=(const Fraction f1, const Fraction f2); // dibe 
bool operator==(const Fraction f1, const Fraction f2); // done
    
istream& operator>>(istream &in, const Fraction &f);
ostream& operator<<(ostream &out, const Fraction &f);

