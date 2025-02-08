#include<stdio.h>
int main()
{
    char word ;
    printf("Enter a character : ");
    scanf("%c" , &word);
    printf("The ASCII value of %c is %d" , word , (int)word);
    return 0;
}