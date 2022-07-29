#include <stdio.h>

int main() {
    int a, b;
    char A;
    scanf("%d %c %d", &a, &A, &b);
    switch(A)
    {
         case '+':
            printf("Your result : %d", a + b);
            break;
         case '-':
            printf("Your result : %d", a - b);
            break;
         case '*':
            printf("Your result : %d", a * b);
            break;
         case '/':
            printf("Your result : %d", a / b);
            break;
         default:
            printf("Error");
    }



}

