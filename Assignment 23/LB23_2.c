/*
Accept character from user. If character is small, display its corresponding capital character and if it is small then display its coresponding capital. In other cases display as it is
*/
#include<stdio.h>

void Display(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c",ch - 32);
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c",ch + 32);
    }
    else
    {
        printf("%c",ch);
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