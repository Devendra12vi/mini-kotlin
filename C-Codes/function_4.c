#include <stdio.h>
#include <conio.h>
int fibonacci(int); // function prototype
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    //f = fibonacci(n);
    printf("Fibonachi %d:\n", fibonacci(n));
    return 0;
}
int fibonacci(int n)
{
    if (n<=1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
