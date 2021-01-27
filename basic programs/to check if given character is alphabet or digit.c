#include<stdio.h>
#include<conio.h>
int main()
{
 char ch='\0';
    printf("\n Enter a Character  to check if it is Alphabet or Digit=> ");
    scanf("%c",&ch);
    printf("\n***************_______________***************\n");
    if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
    {
        printf("\n Given Character is Alphabet");
    }
    else if((ch>='0')&&(ch<='9'))
    {
        printf("\n Given Character is Digit");
    }
    else
    {
        printf("\n Given Character is Special Symbol");
    }



    printf("\n***************_______________***************\n");
    getch();
    return 0;
}
