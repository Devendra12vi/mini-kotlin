#include <stdio.h>
int main()
{
    int sum = 0;
    int i=1;
    while(i<=10){
    sum+=8*i;
        
    printf("8*%d=%d\n",i,8*i );
    i++;
    }
    printf("%d",sum);

return 0;
}