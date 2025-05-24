//write a program which accepts area in square 
//feet and convert it into square meter 
//(1 square feet = 0.0929 square meter)

#include<stdio.h>

double SquareMeter(int iValue1)
{
    double iValue2 = 0;

    iValue2 = 0.0929 * iValue1;

    return iValue2;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%d square feet = %f square meter",iValue,dRet);

    return 0;
}