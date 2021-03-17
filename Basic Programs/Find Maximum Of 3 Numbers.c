#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3;
    printf("\nEnter 3 numbers for comparison");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1==num2&&num2==num3)
    {
        printf("All three numbers are equal");
    }
    else if(num1>=num2&&num1>=num3)
    {
        printf("\n%d is maximum",num1);
    }
    else if(num1<=num2&&num2>=num3)
    {
         printf("\n%d is maximum",num2);
    }
    else if(num1<=num3&&num2<=num3)
    {
         printf("\n%d is maximum",num3);
    }

    else{}
     getch();
     return 0;
}
