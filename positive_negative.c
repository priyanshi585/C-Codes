#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number: ");
    scanf("%d" , &num);
    if(num>0){
        printf("POSITIVE Number");
    }
    else if(num==0){
        printf("Zero");
    }
    else{
        printf("NEGATIVE Number");
    }
    return 0;
}