#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;
 
  
  c.red = MAX_COLOR;
  c.green = 0;
  c.blue = 0;
  
  clear_screen(s);

  int x;
  for(x=0; x<XRES; x+=5){
    draw_line(XRES/2,YRES/2,x,0,s,c);
  }

  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;
  for(x=0; x<YRES; x+=5){
    draw_line(XRES/2,YRES/2,0,x,s,c);
  }

  c.red = 0;
  c.green = 0;
  c.blue = MAX_COLOR;
  for(x=0; x<YRES; x+=5){
    draw_line(XRES/2,YRES/2,XRES-1,x,s,c);
  }

  c.red = MAX_COLOR;
  c.green = MAX_COLOR;
  c.blue = 0;
  for(x=0; x<YRES; x+=5){
    draw_line(XRES/2,YRES/2,x,YRES-1,s,c);
  }
  
  display(s);
  save_extension(s, "lines.png");
}
