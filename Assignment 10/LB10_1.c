/*write a program which accept 
number from user and return the 
count of even digits*/

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
        iNo = -iNo;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}