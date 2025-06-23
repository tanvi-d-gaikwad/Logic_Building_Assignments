/*
Accept character from user and check whether it is digit or not(0-9)
Input:    5
Output:   TRUE 
Input:    A
Output:   FALSE
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkDigit(char ch)
{
    if (ch >= '0' && ch <= '9')
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
    bRet = ChkDigit(cValue);
    if (bRet == TRUE)
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("It is not a digit\n");
    }
    return 0;
}