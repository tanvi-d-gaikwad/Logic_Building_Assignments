//Accept on character from user and check whether that character is vowel

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkVowel (char cV)  //cv stands for Cvowel
{
    if(cV == 'a' || cV == 'e' || cV == 'i' || cV == 'o' || cV == 'u')
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
    bool bRet = FALSE;

    printf("Enter a character in lowwer case: ");
    scanf("%c",&cValue);

    bRet = ChkVowel (cValue);

    if(bRet == 1)
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not a vowel");
    }
    return 0;
}