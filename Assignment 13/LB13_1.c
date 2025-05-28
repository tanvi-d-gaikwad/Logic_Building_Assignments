/*accept number of row and number of columns from user and display below pattern
Input: iRow = 4     iCol = 4
Output: A   B   C   D
        A   B   C   D
        A   B   C   D
        A   B   C   D
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNo2 = 0;
    iNo2 = iCol + 65;
    for (i = 0; i < iRow; i++)
    {
        for(j = 65; j < iNo2; j++)
            printf("%c\t",j);
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}