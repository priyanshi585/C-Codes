Question: Write a C program to print multiply value of two numbers.
Code:
#include <stdio.h>
int main() {
    
  int a, b,multiply;
  printf("Enter the values of two numbers\n");
  scanf("%d%d",&a,&b);
  multiply=a*b;
  printf("Multiplication of two numbers= %d\n",multiply);
  return 0;
}


Output -
Enter the values of two numbers
2
4
Multiplication of two numbers= 8
