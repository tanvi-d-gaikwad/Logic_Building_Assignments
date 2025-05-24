//write a program whihc accept width and height
//of rectangle from user and calcultae its area

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double fArea = 0;

    fArea = fWidth * fHeight;

    return fArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f",&fValue1);

    printf("Enter height: ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("The area of rectangle is: %f",dRet);

    return 0;
}