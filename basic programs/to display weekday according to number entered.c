#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;
    printf("\nEnter Number (1 to 7) to display weekday corresponding to it=> ");
    scanf("%d",&num);
    printf("\n***************_______________***************");
    switch(num)
    {
    case 1:
        printf("\nMONDAY");
        break;
    case 2:
        printf("\nTUESDAY");
        break;
    case 3:
        printf("\nWEDNESDAY");
        break;
    case 4:
        printf("\nTHURSDAY");
        break;
    case 5:
        printf("\nFRIDAY");
        break;
    case 6:
        printf("\nSATURDAY");
        break;
    case 7:
        printf("\nSUNDAY");
        break;
    default:
        printf("\n Number is invalid");
    }
    printf("\n***************_______________***************");
    getch();
    return 0;
}
