
int rgbToCMYK(int r, int g, int b, double *c, double *m, double *y, double *k);

int cmykToRGB(double c, double m, double y, double k, int *r, int *g, int *b);


//cmykToRGB(); FUNCTION DEFINATION

int cmykToRGB(double c, double m, double y, double k, int *r, int *g, int *b){

int ptr_r = *r; 

int ptr_g = *g; 

int ptr_b = *b; 

*r = (255) * (1-c) * (1-k);

*g = (255) * (1-m) * (1-k);

*b = (255) * (1-y) * (1-k);

if( (ptr_r == *r  ) || (ptr_g == *g) || (ptr_b == *b)){

return false;

}

return true;


}

