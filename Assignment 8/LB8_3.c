//write a program to accept distance in 
// kilometer and convert it inot meter

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iM = 0;
    iM = 1000 * iNo;
    return iM;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d km = %d m",iValue,iRet);

    return 0;
}