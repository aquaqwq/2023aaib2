#include <stdio.h>
int main()
{
    float pi = 3.14;
    double pi2 = 3.14;
    printf("float %f\n", pi);
    printf("double %f\n", pi2);
    printf("float 10��: %10f\n", pi);
    printf("double 10��: %10f\n", pi2);
    printf("float 10��: %20.18f\n", pi);
    printf("double 10��: %20.18f\n", pi2);
}

float 3.140000
double 3.140000
float 10��:   3.140000
double 10��:   3.140000
float 10��: 3.140000104904174800
double 10��: 3.140000000000000100
