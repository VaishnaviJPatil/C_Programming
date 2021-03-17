#include<stdio.h>
#include<conio.h>
int main()
{
    char lch='\0',sch='\0',ech='\0';
    printf("\n Enter starting character=> ");
    sch=getche();
    printf("\n Enter ending character=> ");
    ech=getche();
    if(sch<ech)
    {
        for(lch=sch;lch<=ech;lch++)
        {
            printf("\n %c",lch);
        }
    }
    else
    {
        for(lch=sch;lch>=ech;lch--)
        {
            printf("\n %c",lch);
        }
    }

   getch();
   return 0;
}
