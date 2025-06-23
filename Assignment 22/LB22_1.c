/*
Accept character from user and check whether it is alphabet or not
Input:    A
Output:   TRUE
Input:    &
Output:   FALSE
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkAlpha(char ch)
{
    if (((ch >= 65) && (ch <= 90))  || ((ch >= 97) && (ch <= 122)) || (ch == 65) || (ch == 90) || (ch == 97) || (ch == 122))
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
    bRet = ChkAlpha(cValue);
    if (bRet == TRUE)
    {
        printf("It is character\n");
    }
    else
    {
        printf("It is not a character\n");
    }
    return 0;
}