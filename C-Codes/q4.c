#include <stdio.h>

int main()
{
    int x, i, fact;
    for (x = 5; i <= 15; x++)
    {
        fact = 1;
        for (i = x; i >= 1; i--)
        {
            /* code */ fact = fact * i;
        }
        printf("foctorial of %d is %d", x, fact);
    }
    return 0;
}