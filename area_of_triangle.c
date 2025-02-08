#include<stdio.h>
int main()
{
    float b , h , area;
    printf("Enter value of base and height : \n");
    scanf("%f%f", &b,&h);
    area = 0.5 * b * h ;
    printf("Area of Triangle : %.2f" , area);
    return 0;
}