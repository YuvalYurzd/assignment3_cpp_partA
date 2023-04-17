#ifndef header
#define header
#include <iostream>
#include <stdexcept>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

namespace ariel
{

}
class Fraction
{
public:
    int numerator;
    int denominator;

    Fraction();
    Fraction(int numerator, int denominator);

    int getNumerator();

    int getDenominator();

    void setNumerator(int num);

    void setDenominator(int den);

    Fraction operator+(const Fraction &other);
    Fraction operator+(double number);
    Fraction operator-(const Fraction &other);
    Fraction operator-(double number);
    Fraction operator/(const Fraction &other);
    Fraction operator/(double number);
    Fraction operator*(const Fraction &other);
    Fraction operator*(double number);

    bool operator==(const Fraction &other) const;
    bool operator==(double number) const;
    bool operator<(const Fraction &other) const;
    bool operator<(double number) const;
    bool operator<=(const Fraction &other) const;
    bool operator<=(double number) const;
    bool operator>(const Fraction &other) const;
    bool operator>(double number) const;
    bool operator>=(const Fraction &other) const;
    bool operator>=(double number) const;

    Fraction &operator++();
    Fraction operator++(int);
    Fraction &operator--();
    Fraction operator--(int);

    friend std::ostream &operator<<(std::ostream &os, const Fraction &frac);
    friend std::istream &operator>>(std::istream &is, const Fraction &frac);
};

Fraction operator*(double num, Fraction &frac);
Fraction operator-(double num, Fraction &frac);
Fraction operator+(double num, Fraction &frac);
Fraction operator/(double num, Fraction &frac);

#endif