//write a program which accepts number from user and display its table

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    if(iNo < 0)
        iNo = -iNo;
    for(iCnt = 1; iCnt < 11; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d * %d = %d\n",iNo, iCnt, iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}