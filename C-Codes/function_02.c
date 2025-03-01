#include<stdio.h>
float ctof(float); //function prototype
int main()
{
 float c=25;
 printf("Celcius =%.0f \n",c);
 printf("convert to forenheit=%.2f",ctof(c));
     return 0;
}
float ctof(float c)
{
    return (c*9/5)+32;
}