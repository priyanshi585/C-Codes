Question: Write a C program to find the area and volume of sphere . 


Code:
#include <stdio.h>
int main() {
    
   float r,area,vol;
   printf("Enter Radius\n");
   scanf("%f",&r);
   area= 4*3.14*r*r;
   vol= (4/3)*3.14*r*r*r;
   printf("Area of Sphere= %f\n",area);
   printf("Volume of Sphere= %f\n",vol);
   return 0;
}

Output -
Enter Radius
20
Area of Sphere= 5024.000000
Volume of Sphere= 25120.000000
