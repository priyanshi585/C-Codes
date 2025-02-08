#include<stdio.h>
int main()
{
    int maths , hindi , english , social , science ;
    printf("Enter marks of five subject : ");
    scanf("%d%d%d%d%d" , &maths , &hindi , &english , &social , &science);
    float total = maths+hindi+english+social+science;
    float percentage = ((total/500)*100);
    if(percentage > 40){
        printf("Congratulations! You are PASSED. \n Your Total Marks : %.2f \n Your Percentage Scored: %.2f" , total, percentage);
    }
    else{
        printf("You are FAILED. \n Your Total marks : %.2f \n Your Percentage Scored: %.2f" , total , percentage) ;
    }
    return 0;
}