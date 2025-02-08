#include<stdio.h>
int main()
{
    int num ;
    printf("Enter three digit number: ");
    scanf("%d" , &num);
    int hund = num/100 ;
    num = num%100;
    int tens = num/10;
    num = num%10;
    int unit = num;
    if(hund>tens && hund>unit){
        printf("%d is greatest." , hund);
    }
    else if(tens>hund && tens>unit){
        printf("%d is greatest.", tens);
    }
    else{
        printf("%d is greatest.", unit);
    }
    return 0;
}