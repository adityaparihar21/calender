#include<stdio.h>
#include<stdlib.h>
int main()
{

int m,h,i=1,a,j,b=1;
    printf("\nEnter Month number of the year 2024:");
    scanf("%d",&m);
    switch (m)
    {
     case 1:
        a=2;
        j=31;
        break;

        case 2:
        a=5;
        j=29;
        break;

        case 3:
        a=6;
        j=31;
        break;

        case 4:
        a=2;
        j=30;
        break;

        case 5:
        a=4;
        j=31;
        break;

        case 6:
        a=7;
        j=30;
        break;

        case 7:
        a=2;
        j=31;
        break;

        case 8:
        a=5;
        j=31;
        break;

        case 9:
        a=1;
        j=30;
        break;

        case 10:
        a=3;
        j=31;
        break;

        case 11:
        a=6;
        j=30;
        break;
 
        case 12:
        a=1;
        j=31;
        break;
    default:
    printf("\a\a Invalid month");
 
    }
    printf("\n\n\n");
    printf("\t\t\t Month - %d -2024 \n\n",m);
    printf("       SUN       MON       TUE      THU      FRI        SAT \n\n",m);
    
    switch(a)
    {
     case 1:
        printf("\t%d",i);
        break;
    case 2:
        printf("\t\t%d",i);
        break;
    case 3:
        printf("\t\t\t%d",i);
        break;
    case 4:
        printf("\t\t\t\t%d",i);
        break;
    case 5:
        printf("\t\t\t\t\t%d",i);
        break;
    case 6:
        printf("\t\t\t\t\t\t%d",i);
         break;
    case 7:
        printf("\t\t\t\t\t\t\t%d",i);
        break;
   
    }
    h=8-a;
    for(i=2;i<=h;i++)
    {
        printf("\t%d",i);


    }
    printf("\n");
    for(i=h+1;i<=j;i++)
    {
        if(b==8)
        {
            printf("\n");
            b=1;
        }
        printf("\t%d",i);
        b++;
    }
}