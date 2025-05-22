//Write a program which accepts one number from user and print that number of evem numbers on screen

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCount = 0;
    for(iCount = 1 ; iCount < iNo; iCount++)
    {
        printf("%d\n", iCount*2);
    }
}

int main()
{
    int iValue = 0;

    printf("enter number\n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}