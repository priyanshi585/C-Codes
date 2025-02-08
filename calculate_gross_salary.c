#include<stdio.h>
int main()
{
   float bs;
   float da= 500;
   printf("Enter Basic Salary: ");
   scanf("%f" , &bs);
   float ta = (10/100)*bs ;
   float pf = (7.8/100)*bs ;
   float gs = bs + da+ ta ;
   float ns = gs - pf ;
   printf("Gross Salary : %.2f\n" , gs);
   printf("Net Salary : %.2f", ns);
   return 0;  
}