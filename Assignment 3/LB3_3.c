//Write a program which accept number from user and print even factors of that number

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    iNo <= 0;
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i<= iNo; i++)
    {
        if(iNo % i == 0 && i % 2 == 0)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("enter number\n");

    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}