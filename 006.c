#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    b = a/10;
    switch(b)
    {
        case 10:
        case 9:
        case 8:
         printf("Your grade is A ");
        break;
        case 7:
        printf("Your grade is B ");
        break;
        case 6:
        printf("Your grade is C ");
        break;
        case 5:
        printf("Your grade is D ");
        break;
        case 4:
        printf("Your grade is F ");
        break;
        case 3:
        printf("Your grade is F ");
        break;
        case 2:
        printf("Your grade is F ");
        break;
        case 1:
        printf("Your grade is F ");
        break;
        case 0:
        printf("Your grade is F ");
        break;

default :
        printf("Error");
    }



}


