
#include "graphics.h"
#include "picture.hpp"
void home () {
setcolor(BLACK);
   int polypoints[8] = {500, 250, 625, 150, 750, 250};
   setfillstyle(1, COLOR(61, 32, 11));
   bar(500, 250, 750, 400);
   setfillstyle(1, COLOR(36, 15, 0));
   fillpoly(3, polypoints);
   setfillstyle(1, COLOR(245, 223, 24)); 
   fillellipse(625, 200, 20, 20);
   setfillstyle(1, COLOR(245, 223, 24));
   bar(530, 280, 600, 360);
   setcolor(BLACK);
   line(530, 320, 600, 320);
   line(565, 280, 565, 360);
}
=======

