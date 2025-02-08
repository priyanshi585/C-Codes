#include<stdio.h>
int main()
{
    int a , b , c;
    printf("Enter values of a , b and c : ");
    scanf("%d%d%d" , &a , &b , &c);
    float avg = (a+b+c)/3 ;
    printf("Average of three numbers: %.2f" , avg);
    return 0;
}