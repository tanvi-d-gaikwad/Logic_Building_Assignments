/*write a program which accepts N from user
and print all odd numbers up to N*/

#include<stdio.h>

void OddDisplay(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("enter number: ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}