#include <stdio.h>

int main (void)
{
  float area,r,h;
  printf("input r :");
  scanf("%f",&r);
  printf("input h :");
  scanf("%f",&h);
  area =(2*22/7*r)*h+2*(22/7*r*r);
  printf("area=%0.2f",area);
  return 0;
}
