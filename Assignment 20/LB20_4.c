/*
Accept N numbers from user and accept Range, Display all elements from that range
Input:
        N :         6
        Start:      60
        End:        90
        Elements:   85  66  3  76  93  88
Output:     85 66 76 88

Input:
        N :         6
        Start:      30
        End:        50
        Elements:   85  66  3  76  93  88
Output:     There is no such number
*/
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    for (int i = iLength; i > 0; i--)
    {
        if ((Arr[i] >= iStart) && (Arr[i] <= iEnd) )
        {
            printf("%d\n",Arr[i]);
        }
        
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the beginning of the range: ");
    scanf("%d", &iValue1);

    printf("Enter the end of the range: ");
    scanf("%d", &iValue2);
    
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
    Range(p, iSize, iValue1, iValue2);

    free(p);
    return 0;
}