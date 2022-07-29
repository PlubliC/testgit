#include<stdio.h>
#include<string.h>
int main() {
char a[100], b[100];
scanf("%[^\n]s", a);
strcpy(b,a);
int i;
int j = strlen(b) - 1;
for(i=0;i<strlen(b);i++,j--){
    if (a[i] != a[j])
    {
        printf("NO");
        return 0;

    }
}
printf("YES");
return 0;
}

