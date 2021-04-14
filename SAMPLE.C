#include<stdio.h>
#include<conio.h>
#include<string.h>

char name[100];
int main()
{
scanf("%[^\n]%s",&name);
printf("The name is: %s",name);
getch();
clrscr();
return 0;
}