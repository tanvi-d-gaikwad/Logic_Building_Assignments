/*
Write a program whihc displays ASCII table. Table contains symbol, decimal, hexadecimal and octal representation of every member from 0 to 255
*/
#include<stdio.h>
#include<ctype.h>

void DisplayASCII()
{
    int i = 0;
    printf("\n|\tDec\t|  Hexadecimal  |     Octal     |   Character   |\n");
    for(i = 1; i <= 255; i++)
    {
        printf("|\t%d\t|\t%x\t|\t%o\t|",i,i,i);
        
        //checking if character is printable or not
        if(isprint(i))
        {
            printf("\t%c\t|",i);
        }
        else
        {
            printf("\t.\t|");
        }
        printf("\n");
    }

}
int main()
{
    DisplayASCII();
    return 0;
}