#include <stdio.h>
#include <conio.h>
float force(float, float);
int main()
{
    float m, f, a;
    printf("Enter the mass of object(in kg):\n");
    scanf("%f", &m);
    printf("Enter the accleretion in (m/s^2):\n");
    scanf("%f", &a);
    f = force(m, a);
    printf("Force=%.2f", f);
    return 0;
}
float force(float m, float a)
{
    // a=9.8;
    return m * a;
}