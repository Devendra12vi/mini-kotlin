#include <stdio.h>
float average(int,int,int);//prototype

int main(){
    int a=5,b=1,c=8;
    float result;
    result=average(a,b,c);//call fnction
    printf("result:%.2f\n",result);
    printf("result=%.2f",average(a,b,c));
    return 0;
}
float average (int x,int y,int z){//body of function
    return (x+y+z)/3.0;
}


