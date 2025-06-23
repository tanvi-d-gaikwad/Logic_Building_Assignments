/*
Accept character from user and check whether it is special symbol or not
(!,@,#,$,%,^,&,*)
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch == 33) || (ch == 64) || (ch == 35) || (ch == 36) || (ch == 37) || (ch == 94) || (ch == 38) || (ch == 42))
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

    printf("Enter a character: ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);
    if(bRet == TRUE)
    {
        printf("Yes, it is a special character");
    }
    else
    {
        printf("No, it is not a special character");
    }
    return 0;
}