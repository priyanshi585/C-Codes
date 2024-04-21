Question: Write a C program to find the area of circle using the formula : Area = PI*r*r

#include <stdio.h>
int main() {
    
   float r,area;
   printf("Enter Radius\n");
   scanf("%f",&r);
   area= 3.14*r*r;
   printf("Area of Circle = %f\n",area);
   return 0;
}


Output -
Enter Radius
20
Area of Circle = 1256.000000
