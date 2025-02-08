#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a three digit number: ");
    scanf("%d" , &num);
    int original = num ;
    int hundred = num/100 ;
    num = num%100;
    int tens= num/10;
    num= num%10;
    int unit = num ;
    int new = (hundred*hundred*hundred) + (tens*tens*tens) + (unit*unit*unit) ;
    if(original == new){
        printf("The given number is ARMSTRONG.");
    }
    else{
        printf("The given number is not a armstrong.");
    }
    return 0;
}