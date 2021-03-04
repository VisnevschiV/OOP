//
//  main.cpp
//  Lab2
//
//  Created by vlad on 25.02.2021.
//

#include <iostream>
#include "Phone.h"
#include "Global.h"

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    Phone iPhone;
    iPhone.setName("72");
    Phone aPhone;
    aPhone.setName("34");
    if(Comp_Names(iPhone,aPhone)==1){
        cout<<"2 phones have the same name\n";
    }else{
        cout<<"not the same name\n";
    }
    cout << "My iPhone is "<< iPhone.getName()<<"\n";
    return 0;
}
