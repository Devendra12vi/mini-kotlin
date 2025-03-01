#include <stdio.h>
#include <conio.h>
int main()
{
    int num[10];
    printf("Enter 10 digit number \n");
    // user input
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number:%d\n", i + 1);
        scanf("%d", &num[i]); /* code */
    }
    // to print input
    printf("you entered number \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}