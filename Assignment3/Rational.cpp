#include "Rational.h"

//Default
Rational::Rational() {
    numerator = 0;
    denominator = 1;
}
//Contructor
Rational::Rational(Integer n, Integer d) {
    numerator = n;
    denominator = d;
}
//Move
Rational::Rational(Rational&& other) {
    numerator = other.numerator;
    denominator = other.denominator;
}
//Copy
Rational::Rational(Rational& other) {
    numerator = other.numerator;
    denominator = other.denominator;
}

double Rational::toDouble() { return (double)numerator / denominator; }

//Non-Compound
Rational Rational::operator+(const Rational &other) {
    Rational sum = *this;
    sum += other;
    return sum;
}

Rational Rational::operator-(const Rational &other) {
    Rational diff = *this;
    diff -= other;
    return diff;
}

Rational Rational::operator*(const Rational &other) {
    Rational product = *this;
    product *= other;
    return product;
}
Rational Rational::operator/(const Rational &other) {
    Rational quot = *this;
    quot /= other;
    return quot;
}

//Compound
Rational &Rational::operator+=(const Rational &other) {
    numerator = (numerator * other.denominator) + (other.numerator * denominator);
    denominator = denominator * other.denominator;
    return *this;
}

Rational &Rational::operator-=(const Rational &other) {
    numerator = (numerator * other.denominator) - (other.numerator * denominator);
    denominator = denominator * other.denominator;
    return *this;
}

Rational &Rational::operator*=(const Rational &other) {
    numerator = numerator * other.numerator;
    denominator = denominator * other.denominator;
    return *this;
}

Rational &Rational::operator/=(const Rational &other) {
    numerator = numerator * other.denominator;
    denominator = denominator * other.numerator;
    return *this;
}

Rational::~Rational() {
}

ostream &operator<<(ostream &os, const Rational &obj) {
    return os << obj.numerator << "/" << obj.denominator;
}
