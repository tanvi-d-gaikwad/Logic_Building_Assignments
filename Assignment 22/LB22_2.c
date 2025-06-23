/*
Accept character from user and check whether it is capital or not 
Input:    F
Output:   TRUE
Input:    f
Output:   FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:");
    scanf("%c", &cValue);
    bRet = ChkCapital(cValue);
    if (bRet == TRUE)
    {
        printf("It is capital character\n");
    }
    else
    {
        printf("It is not a alphabet character\n");
    }
    return 0;
}