#include<stdio.h>
#include<conio.h>
int main()
{
int num=31;
char ch='a';
printf("\n Size of Integer in this environment is %d",sizeof(num));
printf("\n Size of Character in this environment is %d",sizeof(ch));
printf("\n Size of float in this environment is %d",sizeof(float));
printf("\n Size of Short int in this environment is %d",sizeof(short int));
printf("\n Size of double int in this environment is %d",sizeof(double));
getch();
return 0;
}
