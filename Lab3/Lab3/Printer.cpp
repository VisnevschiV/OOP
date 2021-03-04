//
//  Printer.cpp
//  Lab3
//
//  Created by vlad on 04.03.2021.
//

#include "Printer.hpp"
using namespace std;
#include <iostream>
#include <cstring>

#include <cstdarg>


 void Printer::PrintAdd(int X,int Y){
    
    cout << X+Y;
};

void Printer::PrintAdd(int X,int Y,int Z){
    
    cout << X+Y+Z;
};

void Printer::PrintAdd(double X,double Y){
    cout << X+Y;
};

 void Printer::PrintAdd(double X,double Y,double Z){
    cout << X+Y+Z;
};
void Printer::PrintMul(int X,int Y){
    cout << X*Y;
};
void Printer::PrintMul(int X,int Y,int Z){
    cout << X*Y*Z;
};

void Printer::PrintMul(double X,double Y){
    cout << X*Y;
};
void Printer::PrintMul(double X,double Y,double Z){
    cout << X*Y*Z;
};
void Printer::PrintAdd(int count,...){
    va_list ap;
        va_start(ap, count);
        int sum = 0;
        for (int i = 1; i < count; i++)
            sum += va_arg(ap, int);
        va_end(ap);
        cout << sum;
};
void Printer::PrintAdd(const char *x, const char *y){
    char* result;
        result = (char*) malloc(strlen(x) + strlen(y) + 1);
        if (x == nullptr || y == nullptr)
            cout << "one of strings is none" << endl;
        strcpy(result, x);
        strcat(result, y);
        cout << result;
        delete(result);
};
