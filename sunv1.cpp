#include <iostream>
#include <graphics.h>
#include "picture.hpp"
using namespace std;
void sun(){
   setfillstyle(1, COLOR(66, 35, 186));
   bar(0, 0, 800, 300);
   setfillstyle(1, COLOR(185, 202, 237));
   bar(0, 300, 800, 600);
   setfillstyle(1, COLOR(245, 170, 68));
   fillellipse(100, 100, 50, 50);
   setcolor(COLOR(245, 170, 68));
   line(100, 100, 100, 200);
   line(100, 100, 200, 100);
   line(100, 100, 180, 180);
   line(100, 100, 0, 100);
   line(100, 100, 100, 0);
   line(100, 100, 20, 20);
   line(100, 100, 180, 20); 
   line(100, 100, 20, 180);
}
