#include <stdio.h>

int main()
{
int w;
float bmi,h;
do{
    scanf("%f ", &h );
  }while(h<=0);
do{
    scanf("%d", &w);
  }while(w<=0);
printf("%.2f", w/(h*h) );
}



