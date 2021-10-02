/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula
*/
#include <stdio.h>
#include <math.h>
int main ()
{
  float x1, x2, y1, y2, c;
  scanf ("%f%f", &x1, &y1);
  scanf ("%f%f", &x2, &y2);
  float a, b;
  a = x1 - x2;
  b = y1 - y2;
  c = sqrt(a*a+b*b);
  printf ("%.4f", c);
  return 0;
}
