/*
Accept N numbers from user and accept one another as NO, return index of first occurence of that NO
Input:    N:  6
            NO: 66
            Elements: 85  66  3  66  93  88
Output:     1
Input:    N:  6
            NO: 12
            Elements: 85  11  3  15  11  111
Output:     -1*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL FirstOcc(int Arr[], int iLength, int iNo)
{
    for (int i = 0; i < iLength;i++)
    {
        if (Arr[i] == iNo)
        {
            return i; 
        }
    }
    return -1;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number to find: ");
    scanf("%d", &iValue);
    
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
    iRet = FirstOcc(p, iSize,iValue);
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurrence of number is at index: %d\n", iRet);
    }

    free(p);
    return 0;
}