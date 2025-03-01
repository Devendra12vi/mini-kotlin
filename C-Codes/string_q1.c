#include<stdio.h>
#include<conio.h>
int  main()
{
    int x=20;
    
    int *prt;
    
    
    prt=&x;
    
    printf("%p \n",prt);
    
    printf("%d \n",*prt);
    
    printf("%d \n",x);
    
    printf("%p \n",&x); 
    
    return 0;
     
     
}