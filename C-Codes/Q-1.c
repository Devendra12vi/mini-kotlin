#include <stdio.h>
#include <conio.h>
int main()
{
    int x, i, prime = 1;
    clrscr();
    if (x <= 1)
    {
        prime = 1;
    }
    else
    {
        for (x = 2; x <= 10; x++)
        {
            for (i = x; i <= x / 2; i++)
            {
                if (prime % i == 0)
                {
                    prime = 1;
                }
                break;
            }
            if(prime)
             {
                 printf("%d is not a prime number",x);
             }
             else
             {
                 printf("%d is a prime number",x);
             }
        }
    }
    return 0;
}
