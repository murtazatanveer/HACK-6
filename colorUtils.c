#include<stdio.h>
#include "colorUtils.h"

# define flase 1
# define true 0

int main(){

double m, y, k ,c;

int r=10,g=20,b=30;

printf("\nrgbToCMYK(r, g,  b, &c, &m, &y,&k)\n");

printf("\nAfter updating c,m,y,k result is : %d\n",rgbToCMYK(r, g,  b, &c, &m, &y,&k));



double m_1 = 10.5 , y_1=20.5 , k_1=15 , c_1=5.5;

int r_1,g_1,b_1;

printf("\ncmykToRGB(c_1, m_1, y_1, k_1, &r_1, &g_1, &b_1)\n");

printf("\nAfter updating r,g,b result is : %d\n",cmykToRGB(c_1, m_1, y_1, k_1, &r_1, &g_1, &b_1));

;


}