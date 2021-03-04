//
//  Global.cpp
//  Lab2
//
//  Created by vlad on 25.02.2021.
//

#include "Global.h"
#include <stdio.h>
#include <string.h>

int Comp_Names(Phone P,Phone P1){
    if(strcmp(P.getName().c_str(),P1.getName().c_str())==1){
        return 1;
    }else{
        return 0;
    }
}
/*
int Comp_Stars(Phone P,Phone P1){
    if(P.getStars()==P1.getStars()){return 1;}else{
        return 0;
    }
}
int Comp_Rating(Phone P,Phone P1){
    if(P.getRating()==P1.getRating()){return 1;}else{
        return 0;
    }
}
int Comp_Price(Phone P,Phone P1){
    if(P.getPrice()==P1.getPrice()){return 1;}else{
        return 0;
    }
}
int Comp_AVG(Phone P,Phone P1){
    if(P.getAVG()==P1.getAVG()){return 1;}else{
        return 0;
    }
}
int Comp_Names(int i, int j){
    return 1;
}*/


