#include<stdio.h>
int main()
{
    int t , r ;
    float p , SI ;
    printf("Enter principle , rate and time : ") ;
    scanf("%f%d%d" , &p , &r , &t );
    SI = (p*r*t)/100 ;
    printf("Simple Interest : %.2f" , SI) ;
    return 0;
}