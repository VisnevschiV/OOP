//
//  main.cpp
//  Lab3
//
//  Created by vlad on 04.03.2021.
//

#include <iostream>
#include "Printer.hpp";
using namespace std;

int main(int argc, const char * argv[]) {
    Printer::PrintAdd(2, 8);
    cout<<"\n";
    Printer::PrintAdd(4, 3, 4);
    cout<<"\n";

    Printer::PrintAdd(7.5, 6.6);
    cout<<"\n";

    Printer::PrintAdd(3.5, 2.8, 6.9);
    cout<<"\n";

    Printer::PrintMul(4, 6);
    cout<<"\n";

    Printer::PrintMul(3, 2, 8);
    cout<<"\n";

    Printer::PrintMul(4.6, (double) 5);
    cout<<"\n";

    Printer::PrintMul(5.5, 6.6, 6.9);
    cout<<"\n";


         Printer::PrintAdd("dfaa1 ", "asd;kjf2");
    return 0;
}
