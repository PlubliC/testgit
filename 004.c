#include<stdio.h>
int main() {
 int s1,s2,s3,sMAX;
 int l1,l2;
 printf("Please input 3 sides of this triangle :\n");
 scanf("%d %d %d", &s1, &s2, &s3);
 if(s1>s2&&s1>s3){
    s1 = sMAX;
    l1 = s2;
    l2 = s3;
 }
 else if(s2>s1&&s2>s3){
    s2 = sMAX;
    l1 = s1;
    l2 = s3;
 }
 else if(s3>s2&&s3>s1){
    s3 = sMAX;
    l1 = s1;
    l2 = s2;
 }


if(s1+s2<=s3&&s2+s3<=s1&&s1+s3<=s2)
{
    printf("All sides cannot combine into a triangle");
}
else
{
    if(s1==s2==s3)
        printf("This is an equilateral triangle");

    else if(s1==s2||s1==s3||s2==s3)
        printf("This is an isosceles triangle");

    else if(l1*l1 + l2*l2 == sMAX)
        printf("Right triangle");


}
}
