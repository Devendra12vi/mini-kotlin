//Find the largest element in an Array
#include<stdio.h>
#include<conio.h>
int main()
{
    int num, largest, i;
    
    printf("Enter the number of elements in the an array");
    scanf("%d", &num);
    int arr[num];
    printf("Enter %d elements \n",num);
    
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for (int i = 0; i < num; i++)
    {
        if (arr[i]>largest)     
        {
            largest=arr[i];
            
        
        }
        
    }
    printf("Largest Value is %d",largest);
    return 0;
}