#include<stdio.h>
#include<conio.h>
void prime()
{
    int num,prime=1,i;
    printf("Enteger any integer");
    scanf("%d",&num);
    if(num <= 1)
    {
        prime=0;
    }
    else{
for(i=0;i<num/2;i++)
{
    if(num % i == 0)
    {
        prime=0;
        break;
    }
}}

if(prime)
{
    printf("%d is prime \n",num);
}

    else
    {
        printf(" %d is not a prime",num);
    }
}
int main()
{
    prime();
      return 0;
}