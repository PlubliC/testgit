#include<stdio.h>
#include <math.h>
int main() {
int a,b,x,y,sumX,sumY,i,j,m,n;
  scanf("%d %d", &a, &b);
  scanf("%d %d", &x, &y);
  sumX = a-x;
  sumY = b-y;
  m = sumX*sumX + sumY*sumY  ;
n = sqrt(m);
  printf("%d", n-1);
 return 0;
}
