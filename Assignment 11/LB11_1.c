/*Accept number from user an display below pattern
Input:  5
Output: A   B   C   D   E*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iNo1 = 0, iNo2 = 0;
    iNo2 = iNo + 65;
    for (iNo1 = 65; iNo1 < iNo2; iNo1++)
    {
        printf("%c\t",iNo1);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}