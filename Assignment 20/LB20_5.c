/*
Accept N number from user and return product of all odd elements
Input:    
            N:  6
            Elements: 15  66  3  70  10  88
Output:     45
Input:
            N:  5
            Elements: 44  66  72  70  10  88
Output:     1 (No odd elements)
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iMult = 1;
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            iMult *= Arr[i];
        }
        
    }
    return iMult;
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
    iRet = Difference(p, iSize);
    printf("Result is %d\n", iRet);

    free(p);
    return 0;
}