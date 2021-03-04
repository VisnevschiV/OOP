//
//  Canvas.hpp
//  Lab3
//
//  Created by vlad on 04.03.2021.
//

#ifndef Canvas_hpp
#define Canvas_hpp

#include <cstring>

#include <stdio.h>
#include <vector>
using namespace::std;
#endif /* Canvas_hpp */

class Canvas
{
private:
    char table[100][100];
    int width, height;
public:
   Canvas(int width,int height);
   void DrawCircle(int x, int y, int ray, char ch);
   void FillCircle(int x, int y, int ray, char ch);
   void DrawRect(int left, int top, int right, int bottom, char ch);
   void FillRect(int left, int top, int right, int bottom, char ch);
   void SetPoint(int x, int y, char ch);
   void DrawLine(int x1, int y1, int x2, int y2, char ch);
   void Print(); // shows what was printed
   void Clear(); // clears the canvas
};
