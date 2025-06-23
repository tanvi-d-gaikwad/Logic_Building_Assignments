/*
Accept N numbers from user and display summation of digits of each number
Input:
            N:6
            Elements: 8225  665  3  76  953  858
Output:     17 17 3 13 17 21
*/
#include<stdio.h>
#include<stdlib.h>
int DigitsSum(int iNo) 
{
    int iSum = 0;
    while (iNo > 0) 
    {
        iSum += iNo % 10;
        iNo /= 10;
    }
    return iSum;
}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    for (iCnt = 0; iCnt < iSize; iCnt++) {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    
    for (iCnt = 0; iCnt < iSize; iCnt++) 
    {
        iRet = DigitsSum(p[iCnt]);
        printf("%d ", iRet);
    }
    free(p);
    return 0;
}