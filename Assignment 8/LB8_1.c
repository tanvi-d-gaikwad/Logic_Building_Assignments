/*Write a program which accepts radius of circle from user and calculate its area. Conside value of pi as 3.14 (area = pi * radius * radius)*/

#include<stdio.h>

double CircleArea(float fRadius)
{
    const double PI = 3.14;
    double fArea = 0;

    fArea = PI * fRadius * fRadius;

    return fArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("The area of the circle is: %f\n",dRet);

    return 0;
}