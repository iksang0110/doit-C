#include <stdio.h>

float addFloat(float a, float b);

int main()
{
    float sum = addFloat(5.5,4.5);
    printf ("실수의 합 : %.2f\n",sum);
    return 0;
}

float addFloat(float a, float b) 
{
    return a + b;
}





