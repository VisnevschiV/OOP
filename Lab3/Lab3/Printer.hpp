//
//  Printer.hpp
//  Lab3
//
//  Created by vlad on 04.03.2021.
//

#ifndef Printer_hpp
#define Printer_hpp

#include <stdio.h>

#endif /* Printer_hpp */

class Printer
{
public:
   static void PrintAdd(int X,int Y);//prints the sum of ints as int
   static void PrintAdd(int X,int Y,int Z);//prints the sum of ints as int
   static void PrintAdd(double X,double Y); //prints the sum of doubles as double
   static void PrintAdd(double X,double Y,double Z); //prints the sum of doubles as double
   static void PrintMul(int X,int Y); //prints the multiplication of ints as int
   static void PrintMul(int X,int Y,int Z);  //prints the multiplication of ints as int
   static void PrintMul(double X,double Y); //prints the multiplication of doubles as doubles
   static void PrintMul(double X,double Y,double Z); //prints the multiplication of doubles as doubles
   static void PrintAdd(int count,...); // prints the sum of a list of integers
   static void PrintAdd(const char * x, const char * y);//concatenates the strings then prints the result
};

