#include "graphics.h"
#include "picture.hpp"
using namespace std;
void fence()
{
   setfillstyle(1, BROWN);
   bar (5, 400, 15, 500);
   for(int i = 5; i <= 800; i+= 20)
   {
      bar(i, 400, i+10, 500);
   }
   bar(0, 415, 800, 420);
   bar(0, 480, 800, 485);
}