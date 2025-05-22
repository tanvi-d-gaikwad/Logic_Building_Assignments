//accet pne number and check whether it is divisible by 5 or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE -1

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("\nEnter number: ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if (bRet == TRUE)
    {
        printf("\nDivisible by 5");
    }
    else
    {
        printf("\nNot Divisible by 5");
    }
    return 0;
}