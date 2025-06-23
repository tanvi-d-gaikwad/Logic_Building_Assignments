/*
Accept character from user. If it is capital then display all the characters from input characters till Z. If input character is small then pribt all the character in reverse order till a. In other cases, return directly
Input: Q
Output: Q  R  S  T  U  V  W  X  Y  Z 
Input: m
Output: m  l  k  j  i  h  g  f  e  d  c  b  a
Input: 8
Output: 8
*/

#include<stdio.h>

void Display(char ch)
{
    int i = 0;
    if((ch >= 'A') && (ch <= 'Z'))
    {
        for (i = ch; i <= 'Z'; i++)
        {
            printf("%c\t",i);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c\t",i);
        }
    }
    else
    {
        printf("%c\t",ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}