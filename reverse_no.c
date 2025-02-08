#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a three digit number: ");
    scanf("%d" , &num);
    int hundred = num/100 ;
    num = num%100;
    int tens = num/10 ;
    num = num%10;
    int unit = num;
    int reversedNumber = (unit*100) + (tens*10) + (hundred) ;
    int sum = hundred+tens+unit ;
    printf("Reverse of given number is : %d\n" , reversedNumber);
    printf("Sum of digits: %d" , sum);
    return 0;
}