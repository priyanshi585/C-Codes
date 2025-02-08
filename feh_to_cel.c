#include<stdio.h>
int main()
{
    float C , F ;
    printf("Enter temperature in fehrenite: ");
    scanf("%f" , &F);
    C =((F-32)* (0.56)) ;
    printf("Temperature in Celcius : %.2f" , C) ;
    return 0 ;
}