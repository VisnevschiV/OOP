//
//  Canvas.cpp
//  Lab3
//
//  Created by vlad on 04.03.2021.
//

#include "Canvas.hpp"
#include "Printer.hpp"
using namespace std;
#include <iostream>
#include <cstring>

#include <cstdarg>

Canvas::Canvas(int width,int height){
    int i,j;
    this->width = width;
    this->height = height;
    for(i=0;i<width;i++){
        for(j=0;j<height;j++){
            table[i][j]= ' ';
        }
    }
};

void Canvas::SetPoint(int x, int y, char ch){
    if(x<=width && y<=height){
        this->table[x][y] = ch;
    }
};

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch){
    if(x1<=width && x2 <=width && y1<=height && y2<=height){
        int x,y;
        x=abs(x1-x2);
        y=abs(y1-y2);
        if(x<y){
            int difY= y/x;
            while (1)
                {
                    SetPoint(x2-x, y2-y, ch);
                    if (x1 == x2 && y1 == y2) {break;}
                    
                    if (y >= x*difY)
                    {
                        y--;
                    }else{
                        x--;
                    }
                    
                }
        }else if (x>y){
            int difX = x/y;
            while (1)
                {
                    SetPoint(x2-x, y2-y, ch);
                    if (x1 == x2 && y1 == y2) {break;}
                    
                    if (x >= y*difX)
                    {
                        y--;
                    }else{
                        x--;
                    }
                    
                }
                   

            
        }else{
                
                
            
        }
    }
};


void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
    DrawLine(top, left, top, right, ch);
    DrawLine(top, right, bottom, right, ch);
    DrawLine(bottom, right, bottom, left, ch);
    DrawLine(bottom, left, top, left, ch);
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    for (int i = top; i <= bottom; i++)
        DrawLine(left, i, right, i, ch);
}
void FillCircle(int x, int y, int ray, char ch){
    for(int i=0;i<=ray;i++){
        DrawCircle(x,y,ray-i,ch);
    }
};
void Canvas::Print()
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++){
            std::cout << table[i][j];}
        cout << '\n';
    }
}
