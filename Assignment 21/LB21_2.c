/*
Accept N number from user and return the smallest number
Input:
            N: 6
            Elements: 85  66  3  66  93  88
Output:     3
*/

#include<stdio.h>
#include<stdlib.h>



int Minimum(int Arr[], int iLength) 
{
    int iMin = Arr[0];
    for (int i = 1; i < iLength; i++) 
    {
        if (Arr[i] < iMin) 
        {
            iMin = Arr[i];
        }
    }
    return iMin;
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
    
    iRet = Minimum(p, iSize);
    printf("Smallest number is %d\n", iRet);

    free(p);
    return 0;
}