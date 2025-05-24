//write a program which accepts temperature in Fahrenheit and convert it into celsius (1 celsius = (fahrenheit - 32) * (5/9))

#include<stdio.h>

double FhtoCs(float fTempF)
{
    double fTempC = 0.0;

    fTempC = (fTempF - 32) * (5.0/9.0);

    return fTempC;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%f F = %f C",fValue,dRet);

    return 0;
}