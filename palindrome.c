#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a three digit number: ");
    scanf("%d" , &num);
    int hundred = num/100;
    num = num%100 ;
    int tens= num/10;
    num = num%10;
    int unit = num;
    if(hundred == unit){
        printf("The number is a PALINDROME.");
    }
    else{
        printf("The number is not a palindrome.");
    }
    return 0;
}