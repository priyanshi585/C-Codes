#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Corresponding Character: %c\n" , (char)num);
    return 0;
}