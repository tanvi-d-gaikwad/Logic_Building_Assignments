/*
Accept division of student from user and depends 
on the division dispay exam timing. There are 4 
division in school as A, B, C, D. Exam of Division
A at 7am, B at 8:30am, C at 9:20am and D at 10:30am 
(Application should be case sensitive)
Input:    C
Output:   Your exam is at 9:20am
Input:    d
Output:   Your exam is at 10:30am
*/

#include<stdio.h>
#include<stdlib.h>
void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') && (chDiv == 'a'))
    {
        printf("Your exam is at 7:00am\n");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam is at 8:30am\n");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam is at 9:20am\n");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam is at 10:30am\n");
    }
    else
    {
        printf("Invalid division entered\n");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the division: ");
    scanf(" %c", &cValue); 

    DisplaySchedule(cValue);

    return 0;
}