//
//  Phone.hpp
//  Lab2
//
//  Created by vlad on 25.02.2021.
//

#ifndef Phone_hpp
#define Phone_hpp
#pragma once
#include <stdio.h>
using namespace std;
#include <string>

#endif /* Phone_hpp */

class Phone {
    string Name;
    int Stars;
    int Price;
    int User_rating;
    int AVGPrice_Star;
    
    
public:
    void setName(string Name){
        this->Name=Name;
    }
    string getName(){
        return Name;
    }
    
    void setStars(int nr){
        Stars = nr;;
    }
    int getStars(){
        return Stars;
    }
    void setPrice(int nr){
        Price = nr;;
    }
    int getPrice(){
        return Price;
    }
    void setUser_rating(int nr){
        User_rating = nr;;
    }
    int getUser_rating(){
        return User_rating;
    }
    int getAVGPrice_Star(){
        if(Price!=-1&&Stars!=-1){
            AVGPrice_Star=Price/Stars;
            return AVGPrice_Star;
            
        }else{
                return 0;
        }
    }
    
   
};
