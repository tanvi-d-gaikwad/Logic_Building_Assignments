/*Write a program whihc accept number from 
a user and print that number of $ and * 
on screen */

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        printf("$ * ");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}