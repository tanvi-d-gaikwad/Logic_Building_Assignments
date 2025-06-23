/*
Accept N number from user and accept one another number as NO, check whether NO is present or not
Input:    N:  6
            NO: 66
            Elements: 85  66  3  66  93  88
Output:     TRUE
Input:    N:  6
            NO: 12
            Elements: 85  11  3  15  11  111
Output:     FALSE
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    for (int i = 0; i < iLength;i++)
    {
        if (Arr[i] == iNo)
        {
            return TRUE; 
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0, iFindNo = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number to find: ");
    scanf("%d", &iFindNo);
    
    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    bRet = Check(p, iSize,iFindNo);
    if (bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(p);
    return 0;
}