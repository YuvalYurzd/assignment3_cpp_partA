#include "Fraction.hpp"
using namespace std;

Fraction::Fraction(){

}

Fraction::Fraction(int numerator, int denominator){
    this->numerator = numerator;
    this->denominator = denominator;
}

int Fraction::getNumerator(){
    return 0;
}

int Fraction::getDenominator(){
    return 1;
}

void Fraction::setNumerator(int num){

}

void Fraction::setDenominator(int den){

}

Fraction Fraction::operator+(const Fraction &other){

    return Fraction(1,1);
}
Fraction Fraction::operator+(double number){
    return Fraction(1,1);
}
Fraction Fraction::operator-(const Fraction &other){
    return Fraction(1,1);
}
Fraction Fraction::operator-(double number){
    return Fraction(1,1);
}
Fraction Fraction::operator/(const Fraction &other){
    return Fraction(1,1);
}
Fraction Fraction::operator/(double number){
    return Fraction(1,1);
}
Fraction Fraction::operator*(const Fraction &other){
    return Fraction(1,1);
}
Fraction Fraction::operator*(double number){
    return Fraction(1,1);
}

bool Fraction::operator==(const Fraction &other) const{
    return false;
}
bool Fraction::operator==(double number) const{
    return false;
}
bool Fraction::operator<(const Fraction &other) const{
    return false;
}
bool Fraction::operator<(double number) const{
    return false;
}
bool Fraction::operator<=(const Fraction &other) const{
    return false;
}
bool Fraction::operator<=(double number) const{
    return false;
}
bool Fraction::operator>(const Fraction &other) const{
    return false;
}
bool Fraction::operator>(double number) const{
    return false;
}
bool Fraction::operator>=(const Fraction &other) const{
    return false;
}
bool Fraction::operator>=(double number) const{
    return false;
}

Fraction& Fraction::operator++(){
    return *this;
}
Fraction Fraction::operator++(int){
    return Fraction(1,1);
}
Fraction& Fraction::operator--(){
    return *this;
}
Fraction Fraction::operator--(int){
    return Fraction(1,1);
}

std::ostream &operator<<(std::ostream &os, const Fraction &frac){
    return os;
}
std::istream &operator>>(std::istream &is, const Fraction &frac){
    return is;
}
Fraction operator*(double num, Fraction &frac){
    return Fraction(1,1);
}
Fraction operator-(double num, Fraction &frac){
    return Fraction(1,1);
}
Fraction operator+(double num, Fraction &frac){
    return Fraction(1,1);
}
Fraction operator/(double num, Fraction &frac){
    return Fraction(1,1);
}