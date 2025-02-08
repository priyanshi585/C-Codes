#include<stdio.h>
int main()
{
    float C , F ;
    printf("Enter temperature in celcius: ");
    scanf("%f" , &C);
    F =(1.8 * C) +32 ;
    printf("Temperature in Fehrenite : %.2f" , F) ;
    return 0 ;
}