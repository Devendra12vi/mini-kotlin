#include<stdio.h>
#include<conio.h>

int main()
{

    int numofrow , i , j ;
    printf("To print X pattern \n");
printf("Enter The Number of row");
scanf("%d",&numofrow);
    if( numofrow % 2 == 0 )
    {
         printf("Please Enter Odd number");
         return 1;
    }   
    else
    { 
    for ( i = 0; i < numofrow; i++)
    {
        for(j=0; j<numofrow; j++)
        {
           if ( i == j || i==numofrow-j-1)
           {
            printf("*");
           }
          //  else if( i=numofrow-j-1)
          //  {
          //   printf("*");
          //  }
           else
           {
             printf(" ");
           }
        }
        printf("\n");
    }   
    }
   return 0;
}