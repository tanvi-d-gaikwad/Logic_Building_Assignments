/*write a program whihc accept
number from user and count frequency
of such a digit whihc are less than 6*/

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
        iNo = -iNo;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}