/* write a program whihc accepts number from the user and 
print its number line*/

#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = (-iNo); iCount <= iNo; iCount++)
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