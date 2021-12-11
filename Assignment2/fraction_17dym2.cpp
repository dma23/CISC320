#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include<stdlib.h>

#include "fraction_17dym2.h"

using namespace std;

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int x) { 
    numerator = x;
    denominator = 1;
}

Fraction::Fraction(int x, int y) {
    
    if(y == 0) {  
        throw invalid_argument("Zero in denominator");
    }
    else { 
    int a = gcd(x, y);
    numerator = x / a;
    denominator = y / a;
    }
}

int Fraction::getNumerator() { 
    return numerator;
}

int Fraction::getDenominator() { 
    return denominator;
}

//Fraction Fraction::sameBase(Fraction f1, Fraction f2) {   


//modified from https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/
int Fraction::gcd(int x, int y) { 
    if (x == 0)
       return y;
    if (y == 0)
       return x;
  
    if (x == y)
        return x;

    if (x > y)
        return gcd(x-y, y);
    return gcd(x, y-x);
}


// Overloading Operators 
ostream& operator<<(ostream &out, const Fraction &f) {
    out << f.numerator << "/" << f.denominator;
    return out;
}

Fraction operator-(const Fraction f) { 
    Fraction a(f.numerator * -1, f.denominator);
    return a;
}

Fraction operator-(const Fraction f1, const Fraction f2) { 
    Fraction a((f1.numerator * f2.denominator)-(f2.numerator * f1.denominator), f1.denominator * f2.denominator);
    return a;
}

Fraction operator+(const Fraction f1, const Fraction f2) { 
    Fraction a((f1.numerator * f2.denominator)+(f2.numerator * f1.denominator), f1.denominator * f2.denominator);
    return a;
}

Fraction operator*(const Fraction f1, const Fraction f2) { 
    Fraction a(f1.numerator * f2.numerator, f1.denominator * f2.denominator);
    return a;

}

Fraction operator/(const Fraction f1, const Fraction f2) { 
    Fraction a(f1.numerator * f2.denominator, f1.denominator * f2.numerator);
    return a;
}

bool operator<=(const Fraction f1, const Fraction f2) { 
    float a, b; 
    a = f1.numerator/f1.denominator;
    b = f2.numerator/f2.denominator;

    if(a <= b) { 
        return true;
    }
    return false;

}

bool operator>=(const Fraction f1, const Fraction f2) { 
    float a, b; 
    a = f1.numerator/f1.denominator;
    b = f2.numerator/f2.denominator;

    if(a >= b) { 
        return true;
    }
    return false;

}

bool operator<(const Fraction f1, const Fraction f2) {
    float a, b; 
    a = f1.numerator/f1.denominator;
    b = f2.numerator/f2.denominator;

    if(a < b) { 
        return true;
    }
    return false;
}

bool operator>(const Fraction f1, const Fraction f2) {
    float a, b; 
    a = f1.numerator/f1.denominator;
    b = f2.numerator/f2.denominator;

    if(a > b) { 
        return true;
    }
    return false;
}

bool operator!=(const Fraction f1, const Fraction f2) { 
    float a, b; 
    a = f1.numerator/f1.denominator;
    b = f2.numerator/f2.denominator;

    if(a == b) { 
        return false;
    }
    return true;
}

bool operator==(const Fraction f1, const Fraction f2) { 
    float a, b; 
    a = f1.numerator/f1.denominator;
    b = f2.numerator/f2.denominator;

    if(a == b) { 
        return true;
    }
    return false;
}

// exceptions 
FractionException::FractionException(const string& e) : message(e){ }
string& FractionException::what() { return message; }


