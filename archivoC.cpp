#include <iostream>
#include <cmath>
#include <random>
#include <stdlib.h>

int main(){
  srand48(20);
    
  float x;
  float y;
  x=0;
  y=0;
  
  int i;
    
  for (i=0;i<1000;i++){
    std::cout << x << " " << y << std::endl;
      
    float dx = drand48()-0.5;
    float dy = drand48()-0.5;
    float norma = sqrt(pow(dx,2)+pow(dy,2));
    dx = dx/norma;
    dy = dy/norma;
      
    x = x + dx;
    y = y + dy;
     
  }
  
  return 0;
}