#include<stdio.h>
int main()
{
    int amt ;
    printf("Enter the amount of money: ");
    scanf("%d" , &amt);
    int thousand = amt/1000 ;
    amt = amt - (thousand*1000);
    int five_hund = amt/500 ;
    amt = amt - (five_hund*500);
    int hund = amt/100 ;
    amt = amt - (hund*100);
    int fifty = amt/50 ;
    amt = amt - (fifty*50);
    int twenty = amt/20 ;
    amt = amt - (twenty*20);
    int ten = amt/10 ;
    amt = amt - (ten*10);
    int five = amt/5 ;
    amt = amt - (five*5);
    int two = amt/2 ;
    amt = amt - (two*2);
    int one = amt/1 ;
    amt = amt - (one*1);
    printf("Number of thousand Note required: %d\n" , thousand);
    printf("Number of five hundred notes required: %d\n" , five_hund);
    printf("Number of Hundred Note required: %d\n" , hund);
    printf("Number of fifty Note required: %d\n" , fifty);
    printf("Number of twenty Note required: %d\n" , twenty);
    printf("Number of ten Note required: %d\n" , ten);
    printf("Number of five Note required: %d\n" , five);
    printf("Number of two Note required: %d\n" , two);
    printf("Number of one Note required: %d\n" , one);
    return 0 ;
}