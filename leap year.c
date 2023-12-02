#include <stdio.h>
#include<math.h>
void main()
{
    int year , x,y ;
    
    printf("Enter the year=  ");
    scanf("%d",&year);
    x = year%100;
    if (x==0)
    {
        /* code */
        y = year%400;
        if (y==0)
        {
            /* code */
            printf("The year %d is leap year",year);
        }
        else{
            printf("The year %d is not a leap year", year);
        }

 
    }
    else{
        y=year%4;
        if (y==0)
        {
            /* code */
            printf("The year %d is leap year",year);
        }
        else{
            printf("The year %d is not a leap year",year);
        }
        
    }
    
}
