//
//  Complex.cpp
//  Lab5
//
//  Created by vlad on 18.03.2021.
//

#include "Complex.hpp"

bool double_equals(double l, double r)
{
    return abs(l - r) < 0.001;
}

Complex::Complex() : Complex(0, 0) {}

Complex::Complex(double real, double imag)
{
    real_data = real;
    imag_data = imag;
}

bool Complex::is_real() const
{
    return imag() == 0;
}

double Complex::real() const
{
    return real_data;
}

double Complex::imag() const
{
    return imag_data;
}

double Complex::abs() const
{
    return sqrt(real() * real() + imag() * imag());
}

Complex Complex::conjugate() const
{
    return { real(), -imag() };
}

Complex operator+(const Complex& l, const Complex& r){
    Complex x = {l.real(),l.imag()};
    x.Add(r.real(), r.imag());
    return x;
}

Complex operator+(const Complex& l, double r){
    Complex x = {l.real(),l.imag()};
    x.Add(r);
    return x;
}
Complex operator+(double l, const Complex& r){
    Complex x = {r.real(),r.imag()};
    x.Add(l);
    return x;
}

Complex operator-(const Complex& obj){
    Complex x(-obj.real(),-obj.imag());
    return x;
}

bool operator==(const Complex& l, const Complex& r){
    if(l.real()==r.real() && l.imag()==r.imag()){
        return true;
    }else{
        return false;
    }
}

Complex operator-(const Complex& l, const Complex& r){
    Complex x = {l.real(),l.imag()};
    x.Subb(r.real(), r.imag());
    return x;
}
Complex operator*(const Complex& l, const Complex& r){
    Complex x = {l.real(),l.imag()};
    x.Mul(r.real(), r.imag());
    return x;
}

Complex operator++(Complex l){
    Complex x = {l.real(),l.imag()};
    x.Add(1, 1);
    return x;
}
Complex operator--(Complex l){
    Complex x = {l.real(),l.imag()};
    x.Subb(1, 1);
    return x;
}

/*Complex Complex::operator++(){
    Complex x = {this->real(),this->imag()};
    x.Add(1, 1);
    return x;
}*/
