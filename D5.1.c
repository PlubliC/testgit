#include<stdio.h>
void pippu(char *io)
{
    printf("plub %d", io);
}
void main()
{
int io;
scanf("%d", &io);
if(io<0)
{
    return;
}
pippu("%d", io);
}
