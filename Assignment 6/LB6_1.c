/*write a program which accepts number from 
user and if number is less than 50 then print 
small and if it is greater than 50 and less 
than 100 then print medium, if it is greater 
than 100 nthen print large*/

#include<stdio.h>

void Number(int iNo)
{
    //lower limit are considered inclusive
    if(iNo >= 0 && iNo < 50) 
    {
        printf("Small");
    }   
    else if(iNo >= 50 && iNo < 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}