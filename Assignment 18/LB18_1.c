/*accept N numbers from user and return 
difference between summation of even elements 
and summation of odd elements 
 n: 6
Elements: 85    66  3   80  93  88
    output : 53 (234 -181)
*/
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iSum1 = 0, iSum2 = 0;
    for (int i = 0; i < iLength; i++)
    {
        if (i % 2 == 0) // even index
        {
            iSum1 += Arr[i];
        }
        else // odd index
        {
            iSum2 += Arr[i];
        }
    }
    return iSum1 - iSum2;
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