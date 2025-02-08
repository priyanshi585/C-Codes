#include<stdio.h>
int main()
{
    float km , mm ;
    printf("Enter distance in kilometer: ");
    scanf("%f" , &km);
    mm = km * 1000 ;
    printf("Distance in millimeter : %.2f" , mm);
    return 0 ;
}