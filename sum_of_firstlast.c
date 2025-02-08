#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a four digit number : ");
    scanf("%d" , &num) ;
    int thousand = num/1000 ;
    num = num - (thousand*1000);
    int hundreds = num/100 ;
    num = num - (hundreds*100);
    int tens = num/10 ;
    num = num - (tens*10);
    int unit = num/1 ;
    num = num - (unit*1);
    int sum = thousand + unit ;
    printf("Sum of first and last digit is : %d\n" , sum);
    return 0; 
}