#include<stdio.h>
int main()
{
    char word ;
    printf("Enter a character: ");
    scanf("%c" , &word);
    if( word=='a' || word=='e' || word=='i' || word=='o' || word=='u' || word=='A' || word=='E'|| word=='I' || word=='O' ||word=='U' ){
        printf("The given character is vowel.");
    }
    else{
        printf("The given character is consonant.");
    }
    return 0;
}