/*
Write a program which acepts string from user and check whether it contains vowels in it or not
Input:  "marvellous"
Output: TRUE
Input:  "Demo"
Output: TRUE
Input:  "xyz"
Output: FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
    if((*str == 'A')||(*str == 'E')||(*str == 'I')||(*str == 'O')||(*str == 'U'))
    {
        return TRUE;
    }
    else if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
    {
        return TRUE;
    }
    str++;
    return FALSE;
}
int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter String:\n");
    scanf("%[^'\n']s",&Arr);
    
    bRet = ChkVowel(Arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowels");
    }
    else
    {
        printf("There is no vowel");
    }
    return 0;
}