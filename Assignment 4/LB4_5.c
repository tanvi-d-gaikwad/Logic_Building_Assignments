/*write a program whihc accepts
number from user and return 
difference between summation
of all its factors and non factors */

#include<stdio.h>

int SumNonFact(int iNo)
{
    int i = 0;
    int iSum = 0;

     if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i != 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

int SumFact(int iNo)
{
    int i = 0;
    int iSum = 0;

     if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i == 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet1 = 0;
    int iRet2 = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet1 = SumNonFact(iValue);
    iRet2 = SumFact(iValue);

    printf("The sum of non factors is: %d \n",iRet1);
    printf("The sum of factors is: %d \n",iRet2);
    

    if(iRet1 > iRet2)
    {
        printf("The difference is: %d ",iRet1 - iRet2);
    }

    else
    {
        printf("The difference is: %d",iRet2 - iRet1);
    }

    

    return 0;
}