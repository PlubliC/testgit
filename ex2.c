#include<stdio.h>
int main() {
int a,b,x,y,sumX,sumY,i,j,m,n;
  scanf("%d %d", &a, &b);
  scanf("%d %d", &x, &y);
  if(x>=a)
  {
    i = x;
    j = a;
  }
  else
  {
    i = a;
    j = x;
  }
   if(y>=b)
  {
    m = y;
    n = b;
  }
  else
  {
    m = b;
    n = y;
  }
  sumX = i-j;
  sumY = m-n;
  printf("%d", sumX+sumY);

 return 0;
}
