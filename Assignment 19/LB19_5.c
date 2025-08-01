/*Accept N numbers from user and return frequency of 11 from it
Input:    N:  6
            NO: 66
            Elements: 85  66  3  66  93  88
Output:     2
Input:    N:  6
            NO: 12
            Elements: 85  11  3  15  11  111
Output:     2*/
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iLength, int iNo)
{
    int iFrequency = 0;
    for (int i = 0; i < iLength;i++)
    {
        if (Arr[i] == iNo)
        {
            iFrequency++;  
        }
    }
    return iFrequency;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iFindNo = 0;
    int *p = NULL;

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
    iRet = Display(p, iSize,iFindNo);
    printf("Result is %d\n", iRet);

    free(p);
    return 0;
}