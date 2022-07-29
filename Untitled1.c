#include <stdio.h>

int main() {
//char ts[20];
//scanf("%[^=]s", &ts);
//printf("%s", ts);
int x,y,z;
printf("Input 3 integers.");
scanf("%d %d %d", &x, &y, &z);


if(x>=y&&x>=z)
    printf("The maximum number is %d", x);

else if(y>=z&&y>=x)
    printf("The maximum number is %d", y);

else if(z>=y&&z>=x)
    printf("The maximum number is %d", z);


}
