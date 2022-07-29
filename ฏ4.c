#include<stdio.h>
int main() {
float weight[6] = {55.7, 62.5, 75.89, 66.54, 79.43};
weight[0] = 78.64;
weight[4] = 58.21;
int a;
for(a=0;a<=5;a++)
{
  if(weight[a]>60)
    printf("%.2f", weight[a]);

}

}
