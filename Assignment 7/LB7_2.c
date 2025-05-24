//Accept amout in US Dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iInr = 0;
    
    iInr = iNo * 70;

    return iInr;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in inr is %d",iRet);

    return 0;
}