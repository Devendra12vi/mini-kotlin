#include<stdio.h>
float average (int ,int ,int ); // function prototype
int main()
{
     int x=5, y=7, z=2;
     printf("Average = %.2f",average(x,y,z));
     return 0;
}
float average (int a,int b,int c)
{
    return (a+b+c)/3.00;
}