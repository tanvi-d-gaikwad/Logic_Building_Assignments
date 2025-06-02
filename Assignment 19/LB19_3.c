/*Accept N numbers from user and check whether
11 is present in the array or not
Input:    N:  6
            Elements: 85  66  11  80  93  88
Output:     11 is present*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Display(int Arr[], int iLength)
{
    int iPresent = 0;
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] == 11)
        {
            iPresent = TRUE;
            break;
        }
    }
    return iPresent;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);
    
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
    iRet = Display(p, iSize);
    if (iRet == TRUE)
    {
        printf("11 is present in the array.\n");
    }
    else
    {
        printf("11 is not present in the array.\n");
    }

    free(p);
    return 0;
}