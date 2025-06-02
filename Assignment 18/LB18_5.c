/*Accept N numbers from user and display all 
such elements which are divisible by 11
Input:    N:  6
            Elements: 85  66  3  55  93  88
Output:     66  55  88*/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    for (int i = 0; i < iLength;i++)
    {
        if (Arr[i] % 11 == 0)
        {
            printf("%d\t", Arr[i]);
            printf("\n");
        }
    }
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
    Display(p, iSize);

    free(p);
    return 0;
}