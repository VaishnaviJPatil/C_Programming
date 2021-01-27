#include<stdio.h>
#include<conio.h>
int main()
{
  char ch;

  printf("\nEnter a character to check if it is in upper case or lower ");
  ch=getche();
  if(ch>='A'&& ch<='Z')
  {
      printf("\nEntered character is in upper case\n");
  }
  else if(ch>='a'&&ch<='z')
  {
      printf("\nEntered character is in lower case\n");
  }
  else if(ch>='0')
  {
      printf("\nEntered character is digit\n");
  }
  else
  {

      printf("\nEntered character is special symbol\n");
  }
  getch();
  return 0;
   }
