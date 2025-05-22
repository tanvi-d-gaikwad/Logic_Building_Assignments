/*Write a program which accept number from user and 
prints numbers till that number*/

#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("%d\t",iCount);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}