//Accept one number from user and pront that number of * on screen 

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\t");  //adding \t for good presentation
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}